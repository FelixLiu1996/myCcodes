#include<cstdio>
#include<cstring>
/*
int change(char c)
{
	if (c >= 'A' && c <= 'Z')      return c - 'A';
	else if (c >= 'a' && c <= 'z')    return c - 'a';
}
*/
int main(){
	int hashTable[30] ={0};
	char str[1010];
	int k = 0;    //遍历一下 找到出现最多的字符 
	gets(str);
	int len = strlen(str);
	for (int i = 0; i < len; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			hashTable[str[i] - 'A']++;
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			hashTable[str[i] - 'a']++;
		}
	}
	for (int i = 0; i < 26; i++)
	{
		if (hashTable[i] > hashTable[k])
		{
			k = i;
		}
	}
	printf("%c %d", k + 'a', hashTable[k]);
	return 0;
}