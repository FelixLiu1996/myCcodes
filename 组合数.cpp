#include<cstdio>
/*
//直接计算n！中有多少个质因子p  时间复杂度为O(nlogn) 
int cal(int n, int p)
{
	int ans = 0;
	for(int i = 2; i <= n; i++)
	{
		int temp = i;
		while(temp % p == 0)
		{
			ans++;
			temp /= p;
		}
	}
	return ans;
}
//计算组合数中有多少个质因子p 时间复杂度为O(logn) 
int cal(int n, int p)
{
	int ans = 0;
	while(n)
	{
		ans += n / p;
		n /= p;  //相当于分母多除一个p 
	}
	return ans;
}

//  递归版本
int cal(int n, int p)
{
	if(n < p)  return 0;
	return n / p + cal(n / p, p);
}

*/
/*
 //  计算组合数  定义法
 long long C(long long n, long long m)
 {
 	long long ans = 1;
 	for(long long i = 1; i <= n; i++)
 	{
	 	ans *= i;
	}
	for(long long i = 1; i <= m; i++)
	{
		ans /= i;
	}
	for(long long i = 1; i < n - m; i++)
	{
		ans /= i;
	}
	return ans; 
 }
*/ 
 //使用递归
 long long C(long long n, long long m)
 {
 	if(m == 0 || n == m)  return 1;
 	return C(n - 1, m) + C(n - 1, m - 1);
 } 
 //  上述方法会产生重复计算 因此用一个数组存储中间的计算结果
 long long res[67][67] ={0};
 long long C(long long n, long long m) 
 {
 	if(m == 0 || n == m) return 1;
 	if(res[n][m] != 0)  return res[n][m];
 	return C(n - 1, m) + C(n - 1, m - 1);
 }
 //  定义式的变形计算
 long long C(int n, int m)
 {
 	long long ans = 1;
 	for(long long i = 1; i <= m; i++)
 	{
	 	ans = ans * (n - m + i) / i;
	}
	return ans;
 } 
 
 //对组合数取模的问题
int res[1010][1010] = {0};
long long C(int n, int m, int p) 
{
	if(n == m || m == 0) return 1;
	if(res[n][m] != 0) return res[n][m];
	return (C(n - 1, m) + C(n - 1, m - 1)) % p; 
} 
 
 
 
 
  