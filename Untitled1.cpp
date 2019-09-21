#include<iostream>
#include<cmath>
using namespace std;
//int main()
//{
/*	int a, b;
	scanf("%d%d", &a, &b);
	printf ("%d", a+b);
	return 0;
*/
/*	double a = 3.14, b = 0.12;
	double c = a + b;
	printf("%f", c);
	return 0;
*/
/*	char c1 = 'z', c2 = 'j', c3 = 117;
	printf("%c%c%c", c1, c2, c3);
*/
/*	int num1 = 1, num2 = 2;
	printf("%d\n\n%d", num1, num2);
	printf("%c",7);
	return 0;
*/
/*	char str1[25] = "wo ai de ren bu ai wo";
	char str2[25] = "so sad a story it is";
	printf("%s, %s\n", str1, str2);
	return 0;
*/	
/*	double r = 12.56;
	int a = 3, b = 5;
	printf("%d\n", (int)r);
	printf("%d\n", a / b);
	printf("%.1f", (double)a / (double)b);
	return 0;
*/
/*	int n = 12, m = 3;
	n /= m + 1;
	m %= 2;
	printf("%d %d\n", n, m);
*/
/*	char str[10];
	scanf("%s", str);
	printf("%s", str);
	return 0;
*/	
/*	int a;
	char c, str[10];
	scanf("%d%c%s", &a, &c, str);
	printf("a=%d,c=%c,str=%s", a, c, str);
	return 0;
*/
/*	int a = 123, b = 1234567;
	printf("%5d\n", a);
	printf("%5d\n", b);
	return 0;
*/
/*	int a = 123, b = 1234567;
	printf("%05d\n", a);
	printf("%5d\n", b);
	return 0;
*/
/*	double d1 = 12.3456;
	printf("%.0f\n", d1);
	printf("%.1f\n", d1);
	printf("%.2f\n", d1);
	printf("%.3f\n", d1);
	printf("%.4f\n", d1);
*/
/*	char c1, c2, c3;
	c1 = getchar();
	getchar();
	c2 = getchar();
	c3 = getchar();
	putchar(c1);
	putchar(c2);
	putchar(c3);
	return 0;
}
*/
/*
int main()
{
	double db = -12.56;
	printf("%.2f\n", fabs(db));
	return 0;
}
*/
/*
int main()
{
	double db1 = -5.2, db2 = 5.2;
	printf("%.0f %.0f\n", floor(db1), floor(db2));
	printf("%.0f %.0f\n", ceil(db1), ceil(db2));
	return 0;
}
*/
/*
int main(){
	double db = pow(2.0, 3.0);
	printf("%f\n", db);
	return 0;
}
*/
/*
int main()
{
	int a[10];
	scanf("%d", &a[0]);
	for (int i = 1; i < 10; i++)
	{
		a[i] = a[i - 1] * 2;
	}
	for (int i = 0; i < 10; i++)
	{
		printf("a[%d] = %d\n", i, a[i]);
	}
	return 0;
}
*/
int main()
{
	int a[5] = {3, 1, 4, 5, 2};
	for (int i = 1; i <= 4; i++)
	{
		for (int j = 0; j = 5 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				int t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%d", a[i]);
	}
	return 0;
}
