#include<cstdio>
#include<cstring>
int main(){
	int a, b, sum;
	int num[15];
	scanf("%d%d", &a, &b);
	sum = a + b;
	if(sum < 0)
	{
		printf("-");
		sum = - sum;
	}
	int len = 0;
	if(sum == 0) num[len++] = 0;
	while(sum)
	{
		num[len++] = sum % 10;
		sum /= 10;
	}
	for(int i = len - 1; i >= 0; i--)
	{
		printf("%d", num[i]);
		if(i > 0 && i % 3 == 0) printf(",");
	}
	printf("\n");
	return 0;
}
