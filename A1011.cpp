#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
	char str[] = {'W', 'T', 'L'};
	double hang[3];
	double maxn[4];
	double ans;
	for(int i = 1; i <= 3; i++)
	{
		int id = 0;  //记录最大数的下标 
		scanf("%lf%lf%lf", &hang[0], &hang[1], &hang[2]);
		maxn[i] = max(hang[0], max(hang[1], hang[2]));
		for(int j = 0; j < 3; j++)
		{
			if(hang[j] > hang[id])
			{
				id = j;
			}
		}
		printf("%c ", str[id]);
	}
	ans = (maxn[1] * maxn[2] * maxn[3] * 0.65 - 1 ) * 2;
	printf("%.2f\n", ans);
	return 0;
}