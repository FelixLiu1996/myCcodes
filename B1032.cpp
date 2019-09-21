#include<stdio.h>
const int maxn = 100000;
int school[maxn] = {0};
int main(){
	int n, schID, score;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d%d", &schID, &score);
		school[schID] += score;
	}
	int k = 1, MAX = 0;
	for (int i = 1; i <= n; i++)
	{
		if (school[i] > MAX)
		{
			MAX = school[i];
			k = i;
		}
	}
	printf("%d %d\n", k, MAX);
	return 0;
}
