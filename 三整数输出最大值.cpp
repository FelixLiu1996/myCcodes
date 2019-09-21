#include<iostream>
using namespace std;
int main(){
	int a, b, c, Max;
	printf("输入三个整数：\n");
	scanf("%d %d %d", &a, &b, &c);
	if (a <= b)
	{
		if (a >= c)
		{
			Max = b;
			printf("%d\n", Max);
		}
		else if (b <= c)
		{
			Max = c;
			printf("%d\n", Max);
		}
		else if (a <= c && c <= b)
		{
			Max = b;
			printf("%d\n", Max);
		}
	}
	else if (a > b)
	{
 		if (c <= b)
 		{
		 	Max = a;
			printf("%d\n", Max);	
 		}
 		else if (a <= c)
 		{
			Max = c;
			printf("%d\n", Max); 	
 		}
 		else if (b <= c && c < a)
 		{
		 	Max = a;
		 	printf("%d\n", Max);
		 }
	}
	return 0;
}