#include<cstdio>
#include<algorithm>
using namespace std;
struct mooncake{
	double store;  //库存量 
	double sell;   // 售价
	double price;  //单价 
}cake[1010];
bool cmp(mooncake a, mooncake b)
{
	return a.price > b.price;
}
int main(){
	int n;
	double D;    //市场需求量
	scanf("%d %lf", &n, &D);
	for (int i = 0; i < n; i++)
	{
		scanf("%lf", &cake[i].store);
	} 
	for (int i = 0; i < n; i++)
	{
		scanf("%lf", &cake[i].sell);
	}
	for (int i = 0; i < n; i++)
	{
		cake[i].price = cake[i].sell / cake[i].store;
	}
	sort(cake, cake + n, cmp);
	double ans = 0;
	for (int i = 0; i < n; i++)
	{
		if (cake[i].store <= D)
		{
			D -= cake[i].store;
			ans += cake[i].sell;
		}
		else{
			ans += cake[i].price * D;
			break;
		}
	}
	printf("%.2f", ans);
	return 0;
}