#include<cstdio>
#include<cstring>
int main(){
	char str[10][8] = {"zero", "one", "two", "three", "four", "five", "six",
	"seven", "eight", "nine" };
	char num[110];  //��ʼ���ַ� 
	int digit[110]; //���ÿһλ���� 
	scanf("%s", num);
	int len = strlen(num);
	int sum = 0;
	for(int i = 0; i < len; i++)  //�ַ�ÿһλ��� 
	{
		sum += (num[i] - '0');
	}
	int count = 0; //count��¼digit�ж���λ 
	if(sum == 0) digit[count++] = 0;  //����0 
	while(sum)  //��sum��ÿһλ�浽digit�� 
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
