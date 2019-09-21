#include<cstdio>
#include<algorithm>
using namespace std;
bool cmp(int a, int b)   //���ݼ����� 
{
	return a > b;
}
void NumToArray(int n, int num[])  //����ת��Ϊ���� 
{
	for (int i = 0; i < 4; i++)
	{
		num[i] = n % 10;
		n /= 10;
	}
}
int ArrayToNum(int num[])   //����ת��Ϊ���� 
{
	int sum = 0;
	for (int i = 0; i < 4; i++)
	{
		sum = sum * 10 + num[i];
	}
	return sum;
}
int main()
{
	int n, num[5];
	int Max, Min;
	scanf("%d", &n);
	while (1)
	{
		NumToArray(n, num);
		sort(num, num + 4, cmp);  // �ݼ����� 
		Max = ArrayToNum(num);
		sort(num, num + 4);       // �������� 
		Min = ArrayToNum(num);
		n = Max - Min;
		printf("%04d - %04d = %04d\n", Max, Min, n);
		if (n == 0 || n == 6174)  break;
	}
	return 0;

}
