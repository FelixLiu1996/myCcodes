#include<stdio.h>
#include<math.h>
int main(){
	int n, k, rest;   //k��¼ÿ��Ҫ����Ŀո���� 
	char c;
	scanf("%d %c", &n, &c);
	if (n == 0)  printf(" \n0");
	else 
	{
		int x;
		x = (int)(sqrt((double) (2.0*(n + 1.0)))) - 1;
		if (x % 2 == 0) x = x - 1;
		for (int i = x; i >= 1; i = i - 2)  //��������� 
		{
			k = (x - i) / 2;   //Ҫ����Ŀո���� 
			for (int j = 0; j < k; j++)   //֮ǰ�Ŀո��� 
			{
				printf(" ");
			}
			for (int j = 0; j < i; j++)  //����ַ� 
			{
				printf("%c", c);
			} 
			printf("\n");
		}
		for (int i = 3; i <= x; i = i + 2)
		{
			k = (x - i) / 2;
			for (int j = 0; j < k; j++)   //֮ǰ�Ŀո��� 
			{
				printf(" ");
			}
			for (int j = 0; j < i; j++)  //����ַ� 
			{
				printf("%c", c);
			} 
			printf("\n");	
		}
		rest = n - ((int)(pow((double) (1 + x), 2.0) / 2) - 1);
		printf("%d\n", rest);	
	}
	return 0;
}
