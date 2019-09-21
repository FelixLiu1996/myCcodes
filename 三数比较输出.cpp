#include<iostream>
using namespace std;
int main()
{
	double a, b, c, t, k;
	scanf("%lf %lf %lf", &a, &b, &c);
	if (a < b)
	{
		if (b < c)
		{
			
			printf("%.2f %.2f %.2f\n", a, b, c);
		}
		else if (c < a)
		{
			t = b;
			b = c;
			c = t;
			printf("%.2f %.2f %.2f\n", a, b, c);
		}
		else if (a < c && c < b)
		{
			t = b;
			b = c;
			c = t;
			printf("%.2f %.2f %.2f\n", a, b, c);			
		}
	}
	else if (a > b)
	{
		if(c < b)
		{
			t = a;
			a = c;
			c = t;
			printf("%.2f %.2f %.2f\n", a, b, c);		
		}
		else if (a < c)
		{
			t = a;
			a = b;
			b = t;
			printf("%.2f %.2f %.2f\n", a, b, c);				
		}
		else if (b < c && c < a)
		{
			t = a;
			k = b;
			b = c;
			a = k;
			c = t;
			printf("%.2f %.2f %.2f\n", a, b, c);				
		}
	}
	return 0;	
}

