#include<cstdio>
#include<cstring>
const int maxn = 10010;
int main(){
	char str[maxn], dict[6] = {'P', 'A', 'T', 'e', 's', 't'};
	int hashTable[6] = {0};   //记录这六个字母出现的次数 
	int sum = 0;    //记录六个字母的总个数 
	gets (str);
	int len = strlen(str);
	for (int i = 0; i < len; i++)   //记录每个PATest出现的次数 
	{
		for (int j = 0; j < 6; j++)
		{
			if (str[i] == dict[j])
			{
				hashTable[j]++;
				sum++;
			}
		}	
	}
	while (sum > 0)
	{
		for (int i = 0; i < 6; i++)
		{
			if (hashTable[i] > 0)
			{
				printf("%c", dict[i]);
				hashTable[i]--;
				sum--;
			}
		}
	}
	return 0;
}
