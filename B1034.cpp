#include<cstdio>
#include<cmath>
#include<cstdlib>
using namespace std;
struct Fraction{
	long long up, down;
};
int gcd(long long a, long long b)
{
	if (b == 0)   return a;
	else
	{
		return gcd(b, a % b);
	} 
}
Fraction reduction(Fraction result)
{
	if(result.down < 0)
	{
		result.down = -result.down;
		result.up = -result.up;
	}
	if(result.down == 0)
	{
		result.up = 0;
		result.down = 1;
	}
	else
	{
		long long d = gcd(abs(result.up), abs(result.down));
		result.up /= d;
		result.down /= d;
	}
	return result;
}
//分数的加法 
 Fraction add(Fraction f1, Fraction f2)
 {
 	Fraction result;
 	result.up = f1.up * f2.down + f2.up * f1.down;
 	result.down = f1.down * f2.down;
	return reduction(result);
 }
 
 //分数的减法 
 Fraction minu(Fraction f1, Fraction f2)
 {
 	Fraction result;
 	result.up = f1.up * f2.down - f2.up * f1.down;
 	result.down = f1.down * f2.down;
 	return reduction(result);
 }
 
 //分数乘法 
 Fraction multi(Fraction f1, Fraction f2)
 {
 	Fraction result;
 	result.up = f1.up * f2.up;
 	result.down = f1.down * f2.down;
 	return reduction(result);
 }
 
 //  分数除法 
 Fraction divide(Fraction f1, Fraction f2)
 {
 	Fraction result; 
	result.up = f1.up * f2.down;
	result.down = f1.down * f2.up;
	return reduction(result);
 } 
 //	 分数的输出
 void show(Fraction r)
 {
 	r = reduction(r);
 	if (r.up >= 0)
	{
		if(r.down == 1)
 		{
 			printf("%lld", r.up);
		}
		else if (abs(r.up) > abs(r.down))
		{
			printf("%lld %lld/%lld", r.up / r.down, abs(r.up) % r.down, r.down);
		}
		else {
			printf("%lld/%lld", r.up, r.down);
		}
	}
	else{
		if(r.down == 1)
 		{
 			printf("(%lld)", r.up);
		}
		else if (abs(r.up) > abs(r.down))
		{
			printf("(%lld %lld/%lld)", r.up / r.down, abs(r.up) % r.down, r.down);
		}
		else {
			printf("(%lld/%lld)", r.up, r.down);
		}		
	}
 } 
 
 
int main()
{
	Fraction a, b, add_ab;
	scanf("%lld/%lld %lld/%lld", &a.up, &a.down, &b.up, &b.down);
	show(a);
	printf(" + ");
	show(b);
	printf(" = ");
	show(add(a, b));
	printf("\n");
	
	show(a);
	printf(" - ");
	show(b);
	printf(" = ");
	show(minu(a, b));
	printf("\n");
	
	show(a);
	printf(" * ");
	show(b);
	printf(" = ");
	show(multi(a, b));
	printf("\n");
	
	show(a);
	printf(" / ");
	show(b);
	printf(" = ");
	if(b.up == 0) printf("Inf");
	else {
		show(divide(a, b));
	}
	printf("\n");	
	return 0;
}
