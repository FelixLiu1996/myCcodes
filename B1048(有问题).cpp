#include<cstdio>
#include<cstring>
int main(){
	char str1[110], str2[110];
	scanf ("%s %s", str1, str2);
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	int i;
	for (i = 0; i < len1 / 2; i++)  
	{
		int t = str1[i];
		str1[i] = str1[len1 - 1 - i];
		str1[len1 - 1 - i] = t;
	}
	for (i = 0; i < len2 / 2; i++)
	{
		int t = str2[i];
		str2[i] = str2[len2 - 1 - i];
		str2[len2 - 1 - i] = t;
	}
	for (i = 0; i < len1; i + 2)
	{
		str2[i] = (str2[i] - '0' + str1[i] - '0') % 13;
		if (str2[i] - '0' == 10)
		{
			str2[i] = 'J';
		}
		if (str2[i] - '0' == 11)
		{
			str2[i] = 'Q';
		}
		if (str2[i] - '0' == 12)
		{
			str2[i] = 'K';
		}
	}
	for (i = 1; i < len1; i + 2)
	{
		str2[i] = (str2[i] - '0')- (str1[i] - '0');
		if (str2[i] - '0' < 0)
		{
			str2[i] = str2[i] - '0' + 10;
		}
	}
	for (i = len2 - 1; i >= 0; i--)
	{
		printf("%c", str2[i]);
	}
	return 0;
}
