#include<cstdio>
int main(){
	int score[110] = {0};
	int n, k, j;
	scanf ("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &j);
		score[j]++;
	}
	scanf("%d", &k);
	for (int i = 0; i < k; i++)
	{
		scanf("%d", &j);
		printf("%d", score[j]);
		if (i < k - 1)
		{
			printf(" ");
		}
	}
	return 0;
}
