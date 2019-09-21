#include<cstdio>
/*
int main()
{
	int n;
	scanf("%d", &n);
	int bai = n / 100;
	int shi = (n - bai * 100 ) / 10;
	int ge = n - bai * 100 - shi * 10;
	for (int i = 0; i < bai; i++)
	{
		printf("B");
	}
	for (int i = 0; i < shi; i++)
	{
		printf("S");
	}
	for (int i = 1; i <= ge; i++)
	{
		printf("%d", i);
	}
	printf("\n");
	return 0; 
}
*/

int main(){
	int n;
	scanf("%d", &n);
	int num = 0, ans[5];
	while (n != 0)
	{
		ans[num] = n % 10;
		num++;
		n = n / 10;
	}
	// 然后开始类似上面一样输出 
}

