#include<cstdio>
/*
//ֱ�Ӽ���n�����ж��ٸ�������p  ʱ�临�Ӷ�ΪO(nlogn) 
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
//������������ж��ٸ�������p ʱ�临�Ӷ�ΪO(logn) 
int cal(int n, int p)
{
	int ans = 0;
	while(n)
	{
		ans += n / p;
		n /= p;  //�൱�ڷ�ĸ���һ��p 
	}
	return ans;
}

//  �ݹ�汾
int cal(int n, int p)
{
	if(n < p)  return 0;
	return n / p + cal(n / p, p);
}

*/
/*
 //  ���������  ���巨
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
 //ʹ�õݹ�
 long long C(long long n, long long m)
 {
 	if(m == 0 || n == m)  return 1;
 	return C(n - 1, m) + C(n - 1, m - 1);
 } 
 //  ��������������ظ����� �����һ������洢�м�ļ�����
 long long res[67][67] ={0};
 long long C(long long n, long long m) 
 {
 	if(m == 0 || n == m) return 1;
 	if(res[n][m] != 0)  return res[n][m];
 	return C(n - 1, m) + C(n - 1, m - 1);
 }
 //  ����ʽ�ı��μ���
 long long C(int n, int m)
 {
 	long long ans = 1;
 	for(long long i = 1; i <= m; i++)
 	{
	 	ans = ans * (n - m + i) / i;
	}
	return ans;
 } 
 
 //�������ȡģ������
int res[1010][1010] = {0};
long long C(int n, int m, int p) 
{
	if(n == m || m == 0) return 1;
	if(res[n][m] != 0) return res[n][m];
	return (C(n - 1, m) + C(n - 1, m - 1)) % p; 
} 
 
 
 
 
  