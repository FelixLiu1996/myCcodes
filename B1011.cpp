#include<stdio.h>
int main()
{
	int T;
	scanf("%d", &T);
	long long a[10] = {0}, b[10] = {0}, c[10] = {0};
	for (int i = 0; i < T; i++)
	{
		scanf("%lld%lld%lld", &a[i], &b[i], &c[i]);
	}
	for (int i = 0; i < T; i++)
	{
		if (a[i] + b[i] > c[i])
		{
			printf("Case #%d: true\n", i + 1);
		}
		else 
		{
			printf("Case #%d: fasle\n", i + 1);
		}
	}
	return 0;
}
