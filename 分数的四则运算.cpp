#include<cstdio>
#include<cmath>
struct Fraction{
	int up, down;
}
// �����Ļ��� 
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
//�����ļӷ� 
 Fraction add(Fraction f1, Fraction f2)
 {
 	Fraction result;
 	result.up = f1.up * f2.down + f2.up * f1.down;
 	result.down = f1.down * f2.down;
	return reduction(result);
 }
 
 //�����ļ��� 
 Fraction minu(Fraction f1, Fraction f2)
 {
 	Fraction result;
 	result.up = f1.up * f2.down - f2.up * f1.down;
 	result.down = f1.down * f2.down;
 	return reduction(result);
 }
 
 //�����˷� 
 Fraction multi(Fraction f1, Fraction f2)
 {
 	Fraction result;
 	result.up = f1.up * f2.up;
 	result.down = f1.down * f2.down;
 	return reduction(result);
 }
 
 //  �������� (����Ϊ0δ���а�)
 Fraction divide(Fraction f1, Fraction f2)
 {
 	Fraction result; 
	result.up = f1.up * f2.down;
 	result.down = f1.down * f2.up;
 	return reduction(result);
 } 
 
 //	 ���������
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
	 
 