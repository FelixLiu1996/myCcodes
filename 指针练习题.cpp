#include <cstdio>
#include <cstring>
/*	用指针变量进行两个数比较输出 
void Compare(int* a, int* b)
{
	if (*a < *b)
	{
		int t = *a;
		*a = *b;
		*b = t;
	}
}
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int* p1 = &a, *p2 = &b;
	Compare(p1, p2);
	printf("%d %d\n", a, b);
	return 0;
}
*/
/*  指针变量三数比较大小输出 
void comp_3(int* a, int* b, int* c)
{
	if (*a < *b)
	{
		if (*b < *c)
		{
			int t = *a;
			*a = *c;
			*c = t;
		}
		else if (*c < *a)
		{
			int t = *a;
			*a = *b;
			*b = t;
		}
		else if(*a < *c && *c < *b)
		{
			int t = *a;
			int k = *b;
			*a = *c;
			*b = t;
			*c = k;
		}
	}
	if (*a > *b)
	{
		if (*c > *a)
		{
			int t = *a;
			int k = *b;
			*a = *c;
			*c = k;
			*b = t;
		}
		else if(*a > *c && *c > *b)
		{
			int t = *b;
			*b = *c;
			*c = t;
		}
	}
}
int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int* p1 = &a, *p2 = &b, *p3 = &c;
	comp_3(p1, p2, p3);
	printf("%d %d %d", a, b, c);
	return 0;
}
*/
/*
int main()
{
	char* a = "I love China!";
	//printf("%s", a);
	int n;
	scanf("%d", &n);
	printf("%s\n",a + n);
	return 0;
}
*/
void change(char* str1, char* str2, char* str3)
{
	if (strcmp(str1, str2) > 0)
	{
		if (strcmp(str2, str3) > 0)
		{
			char* str;
			str = str1;
			str1 = str3;
			str3 = str;
		}
		else if (strcmp(str3, str1) > 0)
		{
			char* str;
			str = str1;
			str1 = str2;
			str2 = str;
		}
		else if (strcmp(str1, str3) > 0 && strcmp(str3, str2) > 0)
		{
			char* str_1, *str_2;
			str_1 = str1;
			str_2 = str2;
			str2 = str3;
			str1 = str_2;
			str3 = str_1;
		}
	}
	else if (strcmp(str1, str2) < 0)
	{
		if (strcmp(str1, str3) >0)
		{
			char* str_1, *str_2;
			str_1 = str1;
			str_2 = str2;
			str1 = str3;
			str3 = str_2;
			str2 = str_1;
		}
		else if (strcmp(str1, str3) < 0 && strcmp(str3, str2) < 0)
		{
			char* str;
			str = str2;
			str2 = str3;
			str3 = str;
		}
	}
}
int main()
{
	char a[20],b[20],c[20];
	gets(a);
	gets(b); 
	gets(c);
	char* str1, *str2, *str3;
	str1 = a;
	str2 = b;
	str3 = c;
	change(str1, str2, str3);
	printf("%s\n%s\n%s\n", str1, str2, str3);
	return 0;
}
