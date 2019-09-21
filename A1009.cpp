#include<cstdio>
const int maxn = 1010;
int main(){
	double a[maxn] = {0}, ans[2 * maxn] = {0};
	int k1, k2, e1, e2, count = 0;
	double co;
	scanf("%d", &k1);
	for(int i = 0; i < k1; i++)
	{
		scanf("%d%lf", &e1, &co);
		a[e1] = co;
	}
	scanf("%d", &k2);
	for(int i = 0; i < k2; i++)
	{
		scanf("%d%lf", &e2, &co);
		for(int k = 0; k < maxn; k++)
		{
			if(a[k] != 0) ans[k + e2] += a[k] * co;
		}
		//ans[e1 + e2] += (a[e1] * co);
	}
	for(int i = 0; i < 2 * maxn; i++)
	{
		if(ans[i] != 0) count++;
	}
	printf("%d", count);
	for(int i = 2 * maxn - 1; i >= 0; i--)
	{
		if(ans[i] != 0) printf(" %d %.1f", i, ans[i]);
	}
	return 0;
}
