#include<cstdio>
#include<cmath>
bool isPrime(int n)
{
	if (n <= 1)  return false;
	int sqr = (int)sqrt(1.0 * n);
	for(int i = 2; i <= sqr; i++)
	{
		if(n % i == 0)  return false;
	}
	return true;
}

//  ��nû�ӽ�int��ȡֵ��Χʱ
/*
bool isPrime{
	if(n <= 1)  return false;
	for(int i = 2; i * i <= n; i++)
	{
		if(n % i == 0)  return false;
	}
	return true;
}
*/
 