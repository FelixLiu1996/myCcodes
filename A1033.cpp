#include<cstdio>
#include<algorithm>
using namespace std;
const int maxn = 510;
const int inf = 10000000; //设置初始最低油价 
struct gas{
	double price; //油站的价格 
	int dis;  //油站的距离 
}station[maxn];
bool cmp(gas a, gas b)  //按油站距离从小到大排序 
{
	return a.dis < b.dis;
}
int main(){
	double Cmax, D, Davg; //分别代表邮箱的容量、总距离、单位油能跑的距离 
	int n; //油站的数量
	scanf("%lf%lf%lf%d", &Cmax, &D, &Davg, &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%lf %d", &station[i].price, &station[i].dis);
	}
	//将终点设在最后, 方便讨论 
	station[n].dis = D;
	station[n].price = 0;
	sort(station, station + n , cmp);
	if(station[0].dis != 0)  //如果第一个油站的距离不为0 说明车子不能启动 
	{
		printf("The maximum travel distance = 0.00");
	}
	else{
		double all_price = 0, max_dis = 0, nowtank = 0;
		double Max = Cmax * Davg; //油箱加满的最大跑动距离 
		int now = 0;  //目前在的油站编号 
		while(now < n)
		{
			int k = -1; //记录是否能到达下一站
			double price_min = inf;
			for(int i = now + 1; i <= n; i++)
			{
				if(station[i].dis <= station[now].dis + Max)
				{
					//油站的价格小于当前油站的最低价格 
					if(station[i].price < price_min)  
					{
						price_min = station[i].price;
						k = i;
					}
					//如果找到第一个比现在油站油价低的油站,中断寻找 
					if(price_min < station[now].price)
					{
						break;
					}
				}
			}
			if(k == -1)  //说明不能到达下一站 
			{
				break;
			}
			//计算可找到能到达加油站k，计算花费 
			//need为从now到k加油站所需的油量 
			double need = (station[k].dis - station[now].dis) / Davg;
			if(station[k].price < station[now].price)
			{
				//加油站k的油价低于加油站now的油价，只需要买能到k加油站的油量
				if(nowtank < need)
				{
					all_price += (need - nowtank) * station[now].price;
					nowtank = 0; //到达之后油箱油量为0 
				}
				else{  //油量超出，不用加油，直接到达加油站k 
					nowtank -= need;
				} 
			}
			else{  //加油站k油价高于加油站now油价，则加满 
				all_price += (Cmax - nowtank) * station[now].price;
				nowtank = Cmax - need;
			}
			now = k;  //到达加油站k，进入下一次循环 
		} 
		if(now == n) //能到达终点 
		{
			printf("%.2lf\n", all_price);
		}
		else{ //不能到达终点 
			printf("The maximum travel distance = %.2lf\n", station[now].dis + Max);
		} 
	}
	return 0; 
}
