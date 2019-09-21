#include<cstdio>
int main(){
	double a[1010] = {0}, b[1010] = {0}, c[1010] = {0};
	int k1, k2, e, count = 0;  //记录非零项个数 
	double co;
	scanf("%d", &k1);
	for(int i = 0; i < k1; i++)
	{
		scanf("%d%lf", &e, &co);
		a[e] = co;
	}
	scanf("%d", &k2);
	for(int i = 0; i < k2; i++)
	{
		scanf("%d%lf", &e, &co);
		b[e] = co;
	}
	for(int i = 0; i < 1010; i++)
	{
		c[i] = a[i] + b[i];
		if(c[i] != 0) count++;
	}
	printf("%d", count);
	for(int i = 1009; i >= 0; i--)
	{
		if(c[i] != 0) printf(" %d %.1f", i, c[i]);
	}
	return 0;
}