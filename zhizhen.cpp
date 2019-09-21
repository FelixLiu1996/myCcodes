#include <iostream.h>
#include <string.h>
/*
void main()
{
	int i = 10;
	int *p;
	p = &i;
	cout<<*p<<' '<<i<<endl;

}
*/
/*
void main()
{
	int *p1, *p2;
	int a = 100;
	p1 = &a;
	p2 = p1;
	cout<<*p1<<' '<<*p2<<endl;
}
*/
/*
void main()
{
	int a = 16;
	int *pa = &a, *p2, *p3;
	p2 = pa + 3;
	p3 = pa - 2;
	cout<<*pa<<endl;
	cout<<pa<<endl;
	cout<<p2<<endl;
	cout<<p3<<endl;
}
*/
/*
void main()
{
	int a = 36, *pa = &a;
	cout<<*pa<<endl;
	cout<<pa<<endl;
	pa++;
	cout<<pa<<endl;
	pa--;
	cout<<pa<<endl;
}
*/
/*
void main()
{
	int a[7] = {1, 2, 3, 4, 5, 6, 7};
	int *p = &a[0];
	int *q = &a[5];
	for (p; p <= q; p++)
	{
		cout<<*p<<endl;
	}
}
*/
/*
void main()
{
	int b[5] = {12, 23, 34, 45, 65};
	int *p = &b[1];
	cout<<*p<<endl;
//	(*p)++;  不改变指向的值
//	+*p;   改变指向的值
	cout<<*p<<endl;
	for (int i = 0; i < 5; i++)
	{
		cout<<b[i]<<'\t';
	}
}
*/
/*
void main()
{
	int a[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
	int i, j, m = 3, n = 4;
	cout<<"a数组每行第一个元素的地址为："<<endl;
	for (i = 0; i < m ; i++)
	{
		cout<<a+i<<' '<<&a[i]<<' '<<*(a + i)<<' '<<&a[i][0]<<endl;
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			cout<<*(*(a + i) + j)<<' '; 
		}
		cout<<endl;
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			cout<<*(a[i] + j)<<' '; 
		}
		cout<<endl;
	}

}
*/
/*
void main()
{
	int a[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
	int * pa, *pb;
	pa = &a[0][0];
//	cout<<*pa<<endl;
//	cout<<pa<<endl;
	pb = *a;
//	cout<<*pb<<endl;
//	cout<<pb<<endl;
//	int i, j;
	cout<<*(*(pa + 1) +1)<<endl;
//	for (i = 0; i < 12; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
		//	cout<<*(*(pa + i) + j)<<' ';
//			cout<<*pa+i;
//		}
//		cout<<endl;
//	}
//		cout<<*(*(pa+1)+1);
/*	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
//			cout<<*pa++;
		}
		cout<<endl;
	}
	
}
*/
/*
void main()
{
	char ch;
	char pc[] = "C++ program";
	char *p;
	cout<<"输入一个字符："<<endl;
	cin>>ch;
	p = pc;
	while (*p != '\0' && *p != ch)
	{
		p++;
	}
	if (*p == ch)
		cout<<"字符为： "<<ch<<"位置为："<<p-pc+1<<endl;
}
*/
/*	逆序输出字符串
void main()
{
	char s[50];
	cout<<"请输入一串字符串"<<endl;
	cin.getline (s, 50);
	char *ps = &s[strlen(s)-1];
	int i;
	for (i = 0; i <= strlen(s); i++)
	{
		cout<<*ps;
		ps--;
	}
	cout<<endl;
}
*/
/*
void main()
{
	char *p[] ={"c++ program", "I love China", "you are right", "study hard"};
//	char *p1;
//	p1 = p[3];
	int i;
	for (i = 3; i >= 0; i--)
	{
		cout<<p[i]<<endl;
	}
}
*/
/*	
void main()
{
	int a[3][3];
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			a[i][j] = 3*i +j+1;
		}
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cout<<a[i][j]<<' ';
		}
		cout<<endl;
	}


	int (*p)[3];
	for (i = 0; i < 3; i++)
	{
		p = &a[i];
		for (j = 0; j < 3; j++)
		{
			cout<<(*p)[j]<<' ';
		}
		cout<<endl;
	}
	
}
*/
/*
void main()
{
/*	int i;
	char *name[4];
	char str[4][20]= {"Lucy", "Angle", "Cash","Gary"};
	name[0] = str[0];
	name[1] = str[1];
	cout<<name[1]<<endl;
/*	char **pp;
	for (i = 0; i < 4; i++)
	{
		pp = name+i;
		cout<<*pp<<endl;
	} */

/*
  char *str="Lucy";
  cout<<str+1<<endl;

}
*/
/*
void main()
{
	int a = 1;
	int *p1;
	int **p2;
	int ***p3;
	p1 = &a;
	p2 = &p1;
	p3 = &p2;
	cout<<p1<<endl;
	cout<<*p2<<endl;
	cout<<**p3<<endl;
	cout<<*p1<<endl;

}
*/
/*  交换变量值
void swap1(int x, int y)
{
	int t;
	t = x;
	x = y;
	y = t;
}
void swap2(int *x, int *y)
{
	int t;
	t = *x;
	*x = *y;
	*y = t;
}
void main()
{
	int a = 10, b = 20;
	cout<<a<<' '<<b<<endl;
	swap1(a, b);
	cout<<a<<' '<<b<<endl;
	swap2(&a, &b);
	cout<<a<<' ' <<b<<endl;
}
*/
/*
int sum(int *p, int m)
{
	int s = 0;
	for (int i = 0; i < m; i++)
	{
		s += *p++;
	}
	return s;
}
void main()
{
	int a[5] = {10, 20, 30, 40, 50}, total, *p;
	total = sum(a, 5);
	cout<<total<<endl;
	p = a;
	total = sum(p, 5);
	cout<<total<<endl;
}

*/





