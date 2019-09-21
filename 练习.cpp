#include<cstdio>
#include<cstring>
#include<math.h>
#include<algorithm>
using namespace std;
/*
int main()
{
	int a[] = {3, 1, 4, 5, 2};
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
	for (int k = 0; k < 5; k++)
	{
		printf("%d ", a[k]);
	}
	return 0;
}
*/
/*
int main()
{
	int a[] = {3, 1, 4, 5, 2};
	for (int i = 1; i < 5; i++)
	{
		for (int j = 0; j < 5 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				int t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
	for (int k = 0; k < 5; k++)
	{
		printf("%d ", a[k]);
	}
	return 0;	
}
*/
/*
int main()
{
	int a[5] = {1, 2, 3, 4, 5};
	memset(a, 0, sizeof(a));
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	memset(a, -1,sizeof(a));
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");	
//  用menset函数赋值1 出现乱码 
	memset(a, 1, sizeof(a));
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

}
*/
/*
int main()
{
	char str[15] = {"Good story!"};
//	for (int i = 0; i < 11; i++)
//	{
		printf("%s", str);
//	}
}
*/
/*
int main()
{
	char str[5][5];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			str[i][j] = getchar();
		}
//		getchar();	
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			putchar (str[i][j]);
		}
		putchar('\n');	
	}
}
*/
/*
int main()
{
	char str1[20];
	char str2[5][10];
	gets(str1);
	for (int i = 0; i < 3; i++)
	{
		gets(str2[i]);
	}
	puts(str1);
	for (int i = 0; i < 3; i++)
	{
		puts(str2[i]);
	}
	return 0;
}
*/
/*
int main()
{
	char str[20] = {"Ta ge chang xing,"};
	printf ("%d ", sizeof(str));
	return 0;
}
*/
/*
int main()
{
	char str[15];
	for (int i = 0; i < 3; i++)
	{
		str[i] = getchar();
	}
	for (int i = 0; i < 3; i++)
	{
		putchar(str[i]);
	}
//	puts(str);
	return 0;
}
*/
/*
int main()
{
	int n;
	char str[100] = "123";
	sscanf (str, "%d\n", &n);
	printf("%d\n", n);
	return 0;
}
*/
/*
int main()
{
	int n;
	double db;
	char str[100] = "2048:3.14,hello", str2[100];
	sscanf(str, "%d:%lf,%s", &n, &db, str2);
	printf("n = %d, db = %.2f, str2 = %s", n, db, str2);
	return 0;
}
*/
/*
int main()
{
	int n = 12;
	double db = 3.1415;
	char str[100], str2[100] = "good";
	sprintf(str, "%d:%.2f,%s", n, db, str2);
	printf("%s", str);
	return 0;
}
*/
/*
void print1()
{
	printf("HaHa,\n");
	printf("Good idea!\n");
}
void print2()
{
	printf("Oh no,\n");
	printf("Bad idea!\n");
}
int main()
{
	print1();
	print2();
	return 0;
}
*/
/*
void change(int a[], int b[][5])
{
	a[0] = 1;
	a[1] = 3;
	a[2] = 5;
	b[0][0] = 1;
}
int main()
{
	int a[3] = {0};
	int b[5][5] = {0};
	for (int i = 0; i < 3; i++)
	{
		printf("%d\n", a[i]);
	}
	change(a, b);
	for (int i = 0; i < 3; i++)
	{
		printf("%d\n", a[i]);
	}
	return 0;
}
*/
/*
int main()
{
	int a[10];
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", a + i);
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", *(a + i));
	}
	return 0;
}
*/
/*
int main()
{
	int a[10];
	for (int i = 0; i < 10; i++)
	{
		a[i] = i + 1;
	}
	for (int* p = a; p < a + 10; p++)
	{
		printf("%d ", *p);
	} 	
}
*/
/*
void change(int* p)
{
	*p = 233;
}
int main()
{
	int a = 1;
	int* p = &a;
	change(p);
	printf("%d\n", a);
	return 0;
}
*/
/*
void swap(int* a, int* b)
{
	int t = *a; 
	*a = *b;
	*b = t;
}
int main()
{
	int a = 1, b = 2;
	int* p1 = &a, *p2 = &b;
	swap(p1, p2);
	printf("%d %d", a, b);
	return 0;	
}
*/
/*
void change(int &x)
{
	x = 1;
}
int main()
{
	int x = 10;
	int &y = x;
	change(x);
	printf("%d  %d", x, y);
	return 0;
}
*/
/*  引用的例子 
void swap(int* &p1, int* &p2)
{
	int* t = p1;
	p1 = p2;
	p2 = t;
}
int main()
{
	int a = 1, b = 2;
	int* p1 = &a, *p2 = &b;
	swap(p1, p2);
	printf("%d %d", *p1, *p2);
	return 0;
}
*/
/*
void swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
int main()
{
	int a = 1, b = 2;
	int* p1 = &a, *p2 = &b;
	swap(p1, p2);
	printf("%d %d", a, b);
	return 0;
}
*/
/*
 struct studentInfo{
	int id;
	char gender;
	studentInfo(int _id, char _gender)
	{
		id = _id;
		gender = _gender;
	}
 };
*/
/*
struct Point{
	int x, y;
	Point(){}
	Point(int _x, int _y): x(_x), y(_y){}
} pt[10];
int main()
{
	int num = 0;
	for (int i = 1; i <= 3; i++)
	{
		for (int j = 1; j <= 3; j++)
		{
			pt[num++] = Point(i, j);
		}
	}
	for (int i = 0; i < num; i++)
	{
		printf("%d,%d\n", pt[i].x, pt[i].y);
		return 0;
	}
}
*/
/*
const double eps = 1e-8;
#define Equ(a, b) ((fabs((a)-(b)))<eps)
int main()
{
	double  db = 1.23;
	if (Equ(db,1.23)){
		printf("true");
	}
	else
	{
		printf("false");
	}
	return 0;
}
*/
/*
const double eps = 1e-8;
#define Equ(a, b) ((fabs((a)-(b)))<(eps))
int main(){
	double db1 = 4 * asin(sqrt(2.0) / 2);
	double db2 = 3 * asin(sqrt(3.0) / 2);
	if (Equ(db1, db2)){
		printf("true");
	}
	else {
		printf("false");
	}
	
	return 0;
}
*/
/*
int main(){
	int a, b;
	while (scanf("%d%d", &a, &b), a || b){
		printf("%d\n", a + b);
	}
	return 0;
}
*/
/*
int main(){
	int T, a, b;
	scanf("%d",&T);
	while (T--){
		scanf("%d%d", &a, &b);
		printf("%d\n", a + b);
	}
	return 0;
}
*/
/*
int main(){
	for (int i = 2; i <= 100; i++)
	{
		int num = 0;
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				num = 1;
				break;	
			}
		}
		if(num == 0)
		{
			printf("%d ", i);
		}
				
	}
	return 0;
}
*/
/*
int main(){
	int hashTable[128] = {0};
	char str[100];
	int j;
	scanf ("%s", str);
	int len = strlen(str);
	for (int i = 0; i < len; i++)
	{
 		hashTable[str[i]]++;
	}
	printf("%d", hashTable[97]);
}
*/
/*
int main(){
	char str[20] = {"hello"};
	int len = strlen(str);
	reverse(str, str + len);
	printf("%s", str);
	return 0;
}
*/
int main(){
	int a;
	a = round(((1 + 2) / 2.0) + 0.5);
	printf("%d", a);
	return 0;
} 