#include<cstdio>
#include<cstring>
bool judge(char str[])
{
	int len = strlen(str);
	int i;
	for (i = 0; i < len; i++)
	{
		if (str[i] == 'A' || str[i] == 'P' || str[i] == 'T' || str[i] == ' ')
		{
			continue;
		}
		else
		{
			break;
		}
	}
	if (i < len - 1)  return false;
	else return true;
}
int main(){
	int n;
	char str[11][110];
	for(int i = 0; i < n; i++)
	{
		gets(str[i]);
	}
	for(int i = 0; i < n; i++)
	{
		if (judge(str[i]) == true)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	return 0;
}