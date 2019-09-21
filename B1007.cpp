#include<cstdio>
const int maxn = 100001;
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
	int n, count = 0;
	scanf("%d", &n);
	int j;
	for(int i = 0; i < n; i++)
	{
		if(prime[i] <= n)
		{
			j = i;
		}
	}
	for(int i = 1; i <= j; i++)
	{
		if(prime[i] - prime[i - 1] == 2)
		{
			count++;
		}
	}
	printf("%d\n", count);
	return 0;
}

//  非筛法

bool isPrime(int n)
{
	if(n <= 1)  return false;
	int sqr = (int)sqrt(1.0 * n);
	for(int i = 2; i < sqr; i++)
	{
		if(n % i == 0) return false;
	}
	return true;
}
int main(){
	int n, count = 0;
	scanf("%d", &n);
	for(int i = 3; i < n; i += 2)
	{
		if(isPrime(i) == true && isPrime(i + 2) == true)
		{
			count++;
		}
	}
	printf("%d", count);
	return 0;
}

