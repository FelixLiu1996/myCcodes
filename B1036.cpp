#include<stdio.h>
int main(){
	int n;
	char a;
	scanf("%d %c", &n, &a);
	int row, col = n;
	if (col % 2 == 0) row = col / 2;
	else row = col / 2 + 1;
	for (int i = 0; i < n; i++)   //第一行 
	{
		printf("%c", a);
	}
	printf("\n");
	for (int i = 0; i < row - 2; i++)  //中间的几行 
	{
		printf("%c", a);
		for (int j = 0; j < n - 2; j++)
		{
			printf(" ");
		}
		printf("%c", a);
		printf("\n");
	}
	for (int i = 0; i < n; i++)   //第一行 
	{
		printf("%c", a);
	}
	printf("\n");
	return 0;
}
