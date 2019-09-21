#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
const int maxn = 260;

int main(){
	int n;
	int number = 0, minlen = 260; //��¼��ͬ��׺�ĸ��� 
	char suffix[maxn]; //�����׺ 
	scanf("%d", &n);
	char str[n][maxn];
	getchar();
	for(int i = 0; i < n; i++)  //���ַ������棬���ҷ�ת 
	{
		gets(str[i]);
		int len = strlen(str[i]);
		if(len < minlen) minlen = len;  //��ͬ��׺һ�������ڳ�����̵��ַ����ҵ� 
		reverse(str[i], str[i] + len);
	}
	int i, j;
	for(i = 0; i < minlen; i++)  //��ѯ��׺�Ƿ���ͬ 
	{
		for(j = 0; j < n; j++)  //�����i��λ�ã� ÿ���Ƿ�һ�� 
		{
			char temp = str[0][i];
			if(temp != str[j][i])  //������в�һ����ֱ��break 
			{
				break;
			}
		}
		if(j == n) {
			number++;
			suffix[i] = str[0][i];   //suffix �д洢���Ǻ�׺�ĵ��� 
		}
		else{
			break;
		}
	}
	if(number == 0)  printf("nai\n");
	else{
		//����һ���ַ���ȥ���
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
		//������һ���ַ��� ֱ��ʹ��������ַ��� 
		/*
		for(int k = number - 1; k >= 0; k--)
		{
			printf("%c", str[0][k]);
		}
		*/
	}
	return 0;
}
