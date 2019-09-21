#include<cstdio>
#include<algorithm>
const int maxn = 100010;
using namespace std;
bool cmp(int a, int b)
{
	return a > b;
}
int main(){
	int n, m;  //��¼NC, NP��Ԫ�ص����� 
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
	sort(NC, NC + n, cmp);  //Ԫ�شӴ�С������ ��������������� 
	sort(NP, NP + m, cmp);
	int ans = 0;
	int i = 0, j = 0;
	while(NC[i] > 0 && NP[j] > 0)  //�������� 
	{
		ans += NC[i] * NP[j];
		i++;
		j++;
	}
	//���濼�Ǹ���
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