#include<cstdio>
#include<algorithm>
const int maxn = 100010;
using namespace std;
bool cmp(int a, int b)
{
	return a > b;
}
int main(){
	int n, m;  //记录NC, NP中元素的数量 
	int NC[maxn], NP[maxn];
	scanf("%d", &n); 
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &NC[i]);
	}
	scanf("%d", &m);  
	for(int i = 0; i < m; i++)
	{
		scanf("%d", &NP[i]);
	}
	sort(NC, NC + n, cmp);  //元素从大到小的排列 负数在数组最后面 
	sort(NP, NP + m, cmp);
	int ans = 0;
	int i = 0, j = 0;
	while(NC[i] > 0 && NP[j] > 0)  //考虑正数 
	{
		ans += NC[i] * NP[j];
		i++;
		j++;
	}
	//下面考虑负数
	i = n - 1, j = m - 1;
	while(NC[i] < 0 && NP[j] < 0)
	{
		ans += NC[i] * NP[j];
		i--;
		j--;
	}
	printf("%d\n", ans);
	return 0;
}