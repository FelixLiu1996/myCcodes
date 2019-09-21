#include<cstdio>
int hashTable[100010] = {0}; //记录数字出现次数 
int main(){ 
	int n;
	int a[100010];
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		hashTable[a[i]]++;
	}
	int ans = 0;
	for(int i = 0; i < n; i++)
	{
		if(hashTable[a[i]] == 1)
		{
			ans = a[i];
			break;
		}
	}
	if(ans == 0)
	{
		printf("None\n");
	}else{
		printf("%d\n", ans);
	}
	return 0;
}