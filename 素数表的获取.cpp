#include<cstdio>
#include<cmath>
//  暴力求素数法 
/*
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
int prime[101], pnum = 0;  //prime存放素数，pnum表示素数的个数  
bool p[101] = {0};         //  p[i] = true时，为素数   求解100以内素数的个数 
void find_Prime()
{
	for(int i = 1; i < 101; i++)
	{
		if(isPrime(i) == true)
		{
			prime[pnum++] = i;
			p[i] = true;
		}
	}
}
int main()
{
	find_Prime();
	for(int i = 0; i < pnum; i++)
	{
		printf("%d ", prime[i]);
	}
	return 0;
}
*/
//  埃氏素数筛法 
const int maxn = 101;
int prime[maxn], pnum = 0; // prime存放素数，pnum表示素数的个数
bool p[maxn] = {0};   //如果i是素数 则p[i]为false 
void find_Prime()
{
	for(int i = 2; i < maxn; i++)
	{
		if(p[i] == false)
		{
			prime[pnum++] = i;

			for(int j = i + i; j < maxn; j += i)
			{
				p[j] = true;
			}
		}
	}
}
int main()
{
	find_Prime();
	for(int i = 0; i < pnum; i++)
	{
		printf("%d ", prime[i]);
	}
	return 0;
}



