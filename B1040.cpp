#include<cstdio>
#include<cstring>
const int maxn = 100010;
const int mod = 1000000007;
char str[maxn];
int leftNump[maxn] = {0};  //  计算每一位左边的p的数量 
int main(){
	scanf("%s", str);
	int len = strlen(str);
	for (int i = 0; i < len; i++)
	{
		if (i > 0)
		{
			leftNump[i] = leftNump[i - 1];
		}
		if (str[i] == 'P')
		{
			leftNump[i]++;	
		}	
	}
	int ans = 0, rightNumT = 0;
	for (int i = len - 1; i >= 0; i--)
	{
		if (str[i] == 'T')
		{
			rightNumT++;
		}
		else if(str[i] == 'A')
		{
			ans = (ans + leftNump[i] * rightNumT) % mod;
		}
	}
	printf("%d\n", ans);
	return 0;
}