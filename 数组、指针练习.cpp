#include <cstdio>
#include <cstring>
/*
int main()
{
	int a[10];
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < 5; i++)
	{
		int t = a[i];
		a[i] = a[9 - i];
		a[9 - i] = t;
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", a[i]);
	}
	return 0;
}
*/
/*  ???????????????С 
int main()
{
	char str1[20], str2[20];
	gets(str1);
	gets(str2);
	int r;
	for (int i = 0; i < strlen(str1); i++)
	{
		if(str1[i] != str2[i])
		{
			r = str1[i] - str2[i];
			break;
		}
		else r = 0;
	}
	printf("%d", r);

	return 0;
}
*/
/*  用数组表示Fibonacci数列 
int main()
{
	int a[20];
	a[0] = 1, a[1] = 1;
	for (int i = 2; i < 20; i++)
	{
		a[i] = a[i - 1] + a[i - 2];
	}
	for (int i = 0; i < 20; i++)
	{
		printf("%d\n", a[i]);
	}
	return 0;
} 
*/
/*	输出转置矩阵 
int main()
{
	int a[2][3], b[3][2];
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			scanf("%d",&a[i][j]);
		}
		
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			b[i][j] = a[j][i];
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}
	return 0;
} 
*/
/*  三个字符串求最大值 
int main()
{
	char str1[20], str2[20], str3[20];
	gets(str1);
	gets(str2);
	gets(str3);
	if (strcmp(str1, str2) > 0)
	{
		if (strcmp(str2, str3) > 0)
		{
			printf("%s", str1);
		}
		else if (strcmp(str1, str3) < 0)
		{
			printf("%s", str3);
		}
		else if (strcmp(str1, str3) > 0 && strcmp(str2, str3) < 0)
		{
			printf("%s", str1);
		}
	}
	else if (strcmp(str1, str2) < 0)
	{
		if (strcmp(str2, str3) < 0)
		{
			printf("%s", str3);
		} 
		else if (strcmp(str1, str3) > 0)
		{
			printf("%s", str2);
		}
		else if (strcmp(str1, str3) < 0 && strcmp(str2, str3) > 0)
		{
			printf("%s", str2);
		}
	}
	return 0;
}
*/