#include<cstdio>
#include<cmath>
//ÅĞ¶ÏÖÊÒòÊı 
bool isPrime(int a)
{
	if(a <= 1)  return false;
	int sqr = (int)sqrt(1.0 * a);
	for(int i = 2; i <= sqr; i++)
	{
		if(a % i == 0)  return false;
	}
	return true;
}

