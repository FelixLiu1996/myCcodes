#include<cstdio>
#include<cmath>
struct Fraction{
	int up, down;
}
// 分数的化简 
Fraction reduction(Fraction	result){
	if (result.down < 0)
	{
		result.up = -result.up;
		result.down = - result.down;
	}
	if(result.down == 0)
	{
		result.down = 1;
		result.up = 0;
	}
	else
	{
		int d = gcd(abs(result.up), abs(result.down));
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
 
 //  分数除法 (除数为0未特判版)
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
 	if(r.down == 1)
 	{
 		printf("%d\n", r.up)up;
	}
	else if (abs(r.up) > abs(r.down))
	{
		printf("%d %d/%d\n", r.up / r.down, abs(r.up) % r.down, r.down);
	}
	else {
		printf("%d/%d\n", r.up, r.down);
	}
 } 
	 
 