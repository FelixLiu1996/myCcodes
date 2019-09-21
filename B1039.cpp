#include<cstdio>
#include<cstring>
int main(){
	int hashTable[128] = {0};
	char str[1010];
	int duo = 0, shao = 0;  //记录有几颗珠子多余 或不足 
	scanf ("%s", str);
	int len1 = strlen(str);
	int j;
	for (int i = 0; i < len1; i++)   //记录卖的有哪些珠子 
	{
		hashTable[str[i]]++;  
	}
	scanf ("%s", str);
	int len2 = strlen(str);
	for (int i = 0; i < len2; i++)
	{
		hashTable[str[i]]--;
		if (hashTable[str[i]] < 0)
		{
			shao++;
		}
	}
	for (int i = 0; i < len1; i++)
	{
		if (hashTable[str[i]] > 0)
		{
			duo++;
		}
	}
	if (shao > 0)
	{
		printf("No %d\n", shao);
	}
	else 
	{
		printf("Yes %d\n", duo);
	}
	return 0;
}