#include<cstdio>
#include<cmath>
//  ������������ 
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
int prime[101], pnum = 0;  //prime���������pnum��ʾ�����ĸ���  
bool p[101] = {0};         //  p[i] = trueʱ��Ϊ����   ���100���������ĸ��� 
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
//  ��������ɸ�� 
const int maxn = 101;
int prime[maxn], pnum = 0; // prime���������pnum��ʾ�����ĸ���
bool p[maxn] = {0};   //���i������ ��p[i]Ϊfalse 
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



