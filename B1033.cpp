#include<cstdio>
#include<cstring>
const int maxn = 100010;
int main(){
	bool hashTable[256] = {true}; 
	char str1[maxn], str2[maxn];
	scanf("%s", str1);
	int len1 = strlen(str1);
	int j;
	for (int i = 0 ; i < len1; i++)   //����������ļ�λ 
	{
		if (str1[i] >= 'A' && str1[i] <= 'Z')    //����Ǵ�д��ĸ��ת����Сд��ĸ 
		{
			str1[i] = str1[i] - 'A' + 'a';
		}          
		hashTable[str1[i]] = false;
	}
	scanf("%s", str2);
	int len2 = strlen(str2);
	for (int i = 0; i < len2; i++)
	{
		if (str2[i] >= 'A' && str2[i] <= 'Z')   //����Ǵ�д��ĸ 
		{
			j = str2[i] - 'A' + 'a';
			if (hashTable[str2[i]] == true && hashTable['+'] == true)
			{
				printf("%c", str2[i]);
			}
		}
		else if (hashTable[str2[i]] == true)
		{
			printf("%c", str2[i]);
		}
	}
	return 0;
}
