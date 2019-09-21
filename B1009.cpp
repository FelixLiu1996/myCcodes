#include<cstdio>
#include<cstring>
int main(){
	char str[90];
	gets(str);
	int len = strlen(str);
	char str2[90][90];
	int count = 0, h = 0;
	for (int i = 0; i < len; i++)
	{
		if (str[i] != ' ')
		{
			str2[count][h++] = str[i];
		}
		else 
		{
			count++;
			h = 0;
			str2[count][h] = '\0';
		}	
	}
	for (int i = count; i >= 0; i--)
	{
		printf("%s", str2[i]);
		if (i > 0) printf(" ");
	}
	return 0;
}




