#include<cstdio>
#include<cstring>
const int maxn = 1010;
int main(){
	int hashTable[maxn] = {0};   //记录每个队伍的总分 
	int n;
	scanf ("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int team, number, score;
		scanf ("%d-%d %d", &team, &number, &score);
		hashTable[team] += score;
	}
	int k, Max = -1;
	for (int i = 0; i < maxn; i++)
	{
		if (hashTable[i] > Max)
		{
			k = i;
			Max = hashTable[i];
		}
	}
	printf("%d %d", k, Max);
	return 0;
}