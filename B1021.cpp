#include<cstdio>
#include<cstring>
int main(){
	char str[1010];
	scanf("%s", str);
	int num = strlen(str);
	int count[10] = {0};
	for (int i = 0; i < num; i++)
	{
		int j = str[i];
		count[str[i] - '0']++; //将字符型数字转变为数值型数字的方法 
	}
	for (int i = 0; i < 10; i++)
	{
		if (count[i] != 0)
		{
			printf("%d:%d\n", i, count[i]);	
		}
	}
	return 0;
}
 