#include<cstdio>
#include<algorithm>
using namespace std;
//二分法解决 
const int maxn = 100010;
int n, p, a[maxn];
/*
int binarySearch(int i, long long x)
{
	if (a[n - 1] <= x)   return n; 
	int left = i + 1, right = n - 1, mid;
	while (left < right)
	{
		mid = (left + right) / 2;
		if (a[mid] > x)
		{
			right = mid;
		}
		else {
			left = mid + 1;
		}
	}
	return left;		
}
int main(){
	scanf("%d %d", &n, &p);
	for (int i = 0; i < n; i++)
	{
		scanf ("%d", &a[i]);
	}
	sort(a, a + n);
	int ans = 1;
	for (int i = 0; i < n; i++)
	{
		int j = binarySearch(i, (long long)a[i] * p);
		ans = max(ans, j - i);
	}
	printf("%d\n", ans);
	return 0;
}
*/
//使用upper_bound函数 
/*
int main(){
	scanf("%d%d", &n, &p);
	for (int i = 0; i < n; i++)
	{
		scanf ("%d", &a[i]);
	}
	sort (a, a + n);
	int ans = 1;
	for (int i = 0; i < n; i++)
	{
		int j = upper_bound(a + i + 1, a + n, (long long) a[i] * p) - a;
		ans = max(ans, j - i);
	}
	printf("%d\n", ans);
	return 0;
}
*/

int main(){
	scanf("%d%d", &n, &p);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	sort(a, a + n);
	int i = 0, j = 0, count = 1;
	while (i < n && j < n)
	{
		while(j < n && a[j] <= (long long)a[i] * p)
		{
			count = max(count, j - i + 1);
			j++;
		}
		i++;
	}
	printf("%d\n", count);
	return 0;
}

