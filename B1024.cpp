#include<cstdio>
#include<cstring>
int main(){
	char str[10010];
	scanf("%s", str);
	int len = strlen(str);
	int i, j, exp = 0;
	for (i = 0; i < len; i++)    //找到 E j存放E 
	{
		if (str[i] == 'E')
		{
			j = i;
			break;
		}
	}
	if (str[0] == '-')  printf("-");
	for (i = j + 2; i < len; i++)    //存放指数幂 
	{
		exp = exp * 10 + (str[i] - '0');
	}
	if (exp == 0)
	{
		for (i = 1; i < j; i++)
		{
			printf("%c", str[i]);
		}
	}
	if (str[j + 1] == '+')      //指数为正的移位 
	{
		for (i = 1; i < j; i++)
		{
			if (str[i] == '.')  continue;
			printf("%c", str[i]);
			if (i == j + 2 && j - 3 != exp)
			{
				printf(".");
			}
		}
		for (i = 0; i < (exp - (j - 3)); i++)
		{
			printf("0");
		}
	}
	if (str[j + 1] == '-')    //指数为负的移位 
	{
		printf("0.");
		for (i = 0; i < exp - 1; i++)
		{
			printf("0");
		}
		for (i = 1; i < j; i++)
		{
			if (str[i] == '.')  continue;
			printf("%c", str[i]);
		}	
	}
	return 0;
}
