#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
const int MAXN = 10010;
bool cmp(int a, int b)
{
	return a > b;
}
int main(){
	int a[MAXN], N;
	for(int i = 0; i < N; i++)
	{
		scanf("%d", &a[i]);
	}
	sort(a, a + N, cmp);
	int m = 0, n = 0;
	int res = N;
	for(int i = 1; i < N / 2; i++)
	{
		for(int j = 0; j <= sqrt(N) && j <= i; j++)
		{
			if(m * n < N)
			{
				break;
			}
			if(i - j < res)
			{
				m = i;
				n = j;
				res = i - j;
			}
		}
	}
	int b[m][n];
	
}