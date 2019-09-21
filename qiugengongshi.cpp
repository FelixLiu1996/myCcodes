#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
	int main(){
	double a, b, c;
	double r1, r2;
	scanf("%lf %lf %lf", &a, &b, &c);
	double del = (b*b - 4*a*c);
	if (a == 0)
	{
		char str[20] = "a cannot be zero";
		printf("%s",str);
	}
	if (a != 0)
	{
		if (del > 0)
		{
			r1 = (-b+sqrt(del))	/(2*a);
			r2 = (-b-sqrt(del))	/(2*a);
			printf("r1=%.2f\nr2=%.2f", r1, r2);
		}
		if (del == 0)
		{
			r1 = r2 = -b / (2*a);
			printf("r1=%.2f\nr2=%.2f", r1, r2);
		} 
		else
		{
			char str2[20] = "No real roots!";
			printf("%s\n", str2);
		}
	}
	return 0;
}
