#include<cstdio>
int main(){
	long long a, b, c;
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++)
	{
		scanf("%lld%lld%lld", &a, &b, &c);
		long long res = a + b;
		if(a > 0 && b > 0 && res < 0)   //发生正溢出 
		{
			printf("Case #%d: true\n", i);
		}
		else if(a < 0 && b < 0 && res >= 0)//发生负溢出 
		{
			printf("Case #%d: false\n", i);
		}
		else if(a + b > c)
		{
			printf("Case #%d: true\n", i);
		}
		else
		{
			printf("Case #%d: false\n", i);
		}
	}
	return 0;
}