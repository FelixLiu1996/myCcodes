#include <iostream.h>
/*  ���������ĺ�
double add (double x ,double y)
{
	double z = x+y;
	return z;
}
void main()
{
	double a,b,c;
	cout<<"type two numbers"<<endl;
	cin>>a>>b;
	c = add (a,b);
	cout<<c<<endl;
}
*/
/*         ����Բ��������
float volume(float h,float r,float pai = 3.14);
void main()
{
	float a,b;
	cout<<"�������"<<endl;
	cin>>a;
	cout<<"���������뾶"<<endl;
	cin>>b;
	cout<<"Բ�������Ϊ"<<volume(a, b)<<endl;
}
float volume (float h, float r, float pai)
{
	return (pai*r*r*h);
}
*/

/*  ���ݺ�
int mi (int, int);
int he (int, int);
void main()
{
	int n,k;
	cout<<"������n"<<endl;
	cin>>n;
	cout<<"������k"<<endl;
	cin>>k;
	cout<<he(n, k);
	
}
int mi(int n, int k)
{
	int i;
	int s = 1;
	for (i = 1; i <= k; i++)
	{
		s = n*s;
	}
	return s;
}
int he(int n, int k)
{
	int sum = 0;
	int i;
	for (i = 1; i <= n; i++)
	{
		sum = sum+mi(i, k);
	}
	return sum;
}
*/
/*
int sump (int, int);
int powers (int, int);
void main()
{
	int k = 4,n =6;
	cout<<sump(k,n)<<endl;
}
int powers(int n, int k)
{
	for (int i = 1,product = 1; i <= k; i++)
	{
		product = product*n;
	}
	return product;
}
int sump(int k, int n)
{
	for (int i=1, sum = 0; i <=n; i++)
	{
		sum = sum+powers(i,k);
	}
	return sum;
}
*/
/*  ���õ¶���ʽ
double poly(int n, double x)
{
	if (n == 0) return 1;
	if (n == 1) return x;
	else return ((2 * n-1) * x *poly(n-1, x) - (n-1) * poly(n-2, x)) / n;
}
void main()
{
	cout<<"poly(10, 3)= "<<poly(10, 3)<<endl;
}

*/
/*  �ݹ����
int jianqian (int x)
{
	if (x == 1) return 10;
	else return jianqian(x - 1)+x*10;
}
void main()
{
	int a;
	cout<<"type a number"<<endl;
	cin>>a;
	cout<<jianqian(a);
}
*/
/*	����
int jianqian (int x)
	int sum = 0;
	for (int i = 1; i <= x; i++)
	{
		sum = sum + i*10;
	}
	return sum;
}
void main()
{
	int a;
	cout<<"type a number"<<endl;
	cin>>a;
	cout<<jianqian(a);	
}
*/
/*
void move (char x, char y)
{
	cout<<"Move the plates from "<<x<<"to "<<y<<endl;
}
void  hanoi (int n, char A, char B, char C)
{
	if (n == 1)  move(A, C);
	else
	{
		hanoi (n-1, A, C, B);
		move (A, C);
		hanoi(n-1, B, A, C);
	}
}

void main()
{
	int a;
	cout<<"type a plates numbers"<<endl;
	cin>>a;
	hanoi(a, 'A', 'B', 'C');
}
*/
/*  �׳�
int factorial (int n);
void main()
{
	int a;
	cout<<"type a number"<<endl;
	cin>>a;
	cout<<a<<"�Ľ׳���"<<factorial(a)<<endl;
}
int factorial (int n)
{
	int s = 1;
	if (n == 1) return s;
	else 
	{
		s = n * factorial(n - 1);
	}
	return s;
}
*/
/*
void main()
{
	extern int a;
	cout<<a<<endl;
	a = 200;
	cout<<a<<endl;
}
int a = 100;
*/












