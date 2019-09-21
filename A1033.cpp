#include<cstdio>
#include<algorithm>
using namespace std;
const int maxn = 510;
const int inf = 10000000; //���ó�ʼ����ͼ� 
struct gas{
	double price; //��վ�ļ۸� 
	int dis;  //��վ�ľ��� 
}station[maxn];
bool cmp(gas a, gas b)  //����վ�����С�������� 
{
	return a.dis < b.dis;
}
int main(){
	double Cmax, D, Davg; //�ֱ����������������ܾ��롢��λ�����ܵľ��� 
	int n; //��վ������
	scanf("%lf%lf%lf%d", &Cmax, &D, &Davg, &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%lf %d", &station[i].price, &station[i].dis);
	}
	//���յ��������, �������� 
	station[n].dis = D;
	station[n].price = 0;
	sort(station, station + n , cmp);
	if(station[0].dis != 0)  //�����һ����վ�ľ��벻Ϊ0 ˵�����Ӳ������� 
	{
		printf("The maximum travel distance = 0.00");
	}
	else{
		double all_price = 0, max_dis = 0, nowtank = 0;
		double Max = Cmax * Davg; //�������������ܶ����� 
		int now = 0;  //Ŀǰ�ڵ���վ��� 
		while(now < n)
		{
			int k = -1; //��¼�Ƿ��ܵ�����һվ
			double price_min = inf;
			for(int i = now + 1; i <= n; i++)
			{
				if(station[i].dis <= station[now].dis + Max)
				{
					//��վ�ļ۸�С�ڵ�ǰ��վ����ͼ۸� 
					if(station[i].price < price_min)  
					{
						price_min = station[i].price;
						k = i;
					}
					//����ҵ���һ����������վ�ͼ۵͵���վ,�ж�Ѱ�� 
					if(price_min < station[now].price)
					{
						break;
					}
				}
			}
			if(k == -1)  //˵�����ܵ�����һվ 
			{
				break;
			}
			//������ҵ��ܵ������վk�����㻨�� 
			//needΪ��now��k����վ��������� 
			double need = (station[k].dis - station[now].dis) / Davg;
			if(station[k].price < station[now].price)
			{
				//����վk���ͼ۵��ڼ���վnow���ͼۣ�ֻ��Ҫ���ܵ�k����վ������
				if(nowtank < need)
				{
					all_price += (need - nowtank) * station[now].price;
					nowtank = 0; //����֮����������Ϊ0 
				}
				else{  //�������������ü��ͣ�ֱ�ӵ������վk 
					nowtank -= need;
				} 
			}
			else{  //����վk�ͼ۸��ڼ���վnow�ͼۣ������ 
				all_price += (Cmax - nowtank) * station[now].price;
				nowtank = Cmax - need;
			}
			now = k;  //�������վk��������һ��ѭ�� 
		} 
		if(now == n) //�ܵ����յ� 
		{
			printf("%.2lf\n", all_price);
		}
		else{ //���ܵ����յ� 
			printf("The maximum travel distance = %.2lf\n", station[now].dis + Max);
		} 
	}
	return 0; 
}
