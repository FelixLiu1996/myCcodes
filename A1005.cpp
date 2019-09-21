#include<cstdio>
#include<cstring>
int main(){
	char str[10][8] = {"zero", "one", "two", "three", "four", "five", "six",
	"seven", "eight", "nine" };
	char num[110];  //初始化字符 
	int digit[110]; //存放每一位数字 
	scanf("%s", num);
	int len = strlen(num);
	int sum = 0;
	for(int i = 0; i < len; i++)  //字符每一位相加 
	{
		sum += (num[i] - '0');
	}
	int count = 0; //count记录digit有多少位 
	if(sum == 0) digit[count++] = 0;  //特判0 
	while(sum)  //将sum的每一位存到digit里 
	{
		digit[count++] = sum % 10;
		sum /= 10;
	}
	for(int i = count - 1; i >= 0; i--)
	{
		printf("%s", str[digit[i]]);
		if(i != 0) printf(" ");
	}
	return 0;
}
