#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
	int n;
	scanf("%d", &n);
	int pos[n];
	int num;
	int wrong = n - 1;
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &num);
		pos[num] = i;
		if(num == i && num != 0)
		{
			wrong--;
		}
	}
	int ans = 0;  //��¼��������
	int k = 1;  //��¼���ڱ�λ����С��λ�� 
	while(wrong > 0)
	{
		if(pos[0] == 0)
		{
			while(k < n)
			{
				if(pos[k] != k)
			{
				swap(pos[0], pos[k]);
				ans++;
				break;
			}
			k++;			
			}
		}
		while(pos[0] != 0)
		{
			swap(pos[0], pos[pos[0]]);
			ans++;
			wrong--;
		}
	}
	printf("%d\n", ans);
	return 0; 
}