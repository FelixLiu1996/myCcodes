#include<cstdio>
#include<cstring>
/*
int main(){
	char str1[100], str2[100];
	bool hashTable[100] = {false};
	scanf("%s", str1);
	scanf("%s", str2);
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	for (int i = 0; i < len1; i++)
	{
		char c1, c2;
		int j = 0;
		for (j = 0; j < len2; j++)
		{
			c1 = str1[i];
			c2 = str2[j];
			if (c1 >= 'a' && c1 <= 'z')  c1 = c1 - 32;
			if (c2 >= 'a' && c2 <= 'z')  c2 = c2 - 32;
			if (c1 == c2) break;
		}
		if (j == len2 && hashTable[c1] == false)
		{
			printf("%c", c1);
			hashTable[c1] = true;
		}
	}
	return 0;
}
*/
int main(){
	char a;
	scanf("%c", &a);
	int j = a - 'A' + 'a';
	printf("%d", j);
	return 0;
}