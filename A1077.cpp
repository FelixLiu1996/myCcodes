#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
const int maxn = 260;

int main(){
	int n;
	int number = 0, minlen = 260; //记录相同后缀的个数 
	char suffix[maxn]; //保存后缀 
	scanf("%d", &n);
	char str[n][maxn];
	getchar();
	for(int i = 0; i < n; i++)  //将字符串保存，并且反转 
	{
		gets(str[i]);
		int len = strlen(str[i]);
		if(len < minlen) minlen = len;  //相同后缀一定可以在长度最短的字符串找到 
		reverse(str[i], str[i] + len);
	}
	int i, j;
	for(i = 0; i < minlen; i++)  //查询后缀是否相同 
	{
		for(j = 0; j < n; j++)  //检验第i个位置， 每行是否一样 
		{
			char temp = str[0][i];
			if(temp != str[j][i])  //如果两行不一样，直接break 
			{
				break;
			}
		}
		if(j == n) {
			number++;
			suffix[i] = str[0][i];   //suffix 中存储的是后缀的倒序 
		}
		else{
			break;
		}
	}
	if(number == 0)  printf("nai\n");
	else{
		//借助一个字符串去输出
		reverse(suffix, suffix + number);
		for(int k = 0; k < number; k++)
		{
			printf("%c", suffix[k]);
		}
		/*
		for(int k = number - 2; k >= 0; k--)
		{
			printf("%c", suffix[k]);
		}
		*/ 
		//不借助一个字符串 直接使用输入的字符串 
		/*
		for(int k = number - 1; k >= 0; k--)
		{
			printf("%c", str[0][k]);
		}
		*/
	}
	return 0;
}
