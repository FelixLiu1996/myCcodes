#include<cstdio>
#include<cstring>
bool judge(char str[]){
	int len = strlen(str);
	for (int i = 0; i < len / 2; i++)
	{
		if (str[i] != str[len - 1 - i])
		{
			return false;
		}
	}
	return true;
}
int main()
{
	char str[300];
	gets(str);
	if (judge(str)) printf("YES");
	else printf("NO");
	return 0;
}
