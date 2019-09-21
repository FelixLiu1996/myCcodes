#include<cstdio>
#include<cstring>
int main(){
	char str[110];
	char change[15][5] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", 
	"ba", "jiu"};
	scanf("%s", str);
	int len = strlen(str);
	int sum = 0;
	for (int i = 0; i < len; i++)
	{
		sum = sum + (str[i] - '0');
	}
	int j = 0, num[10];
	while (sum != 0)    //将求和之后的值反着存进数组num
	{
		num[j] = sum % 10;
		j++;
		sum = sum / 10;
	}
	for (int i = j - 1; i >= 0; i--) 
	{
		printf("%s", change[num[i]]);
		if (i != 0) printf(" ");
	}
	return 0;
}
