#include<stdio.h>
/*
int main(){
	int size, M;
	scanf("%d%d", &size, &M);
	int a[size];
	M = M % size;
	for (int i = 0; i < size; i++){
		scanf("%d", &a[i]);
	}
	int* p = a;
	for (int i = size - M; i < size; i++)
	{
		printf("%d", *(p + i));
		printf(" ");
	}
	for (int i = 0; i < size - M; i++)
	{
		printf("%d", *(p + i));
		if (i < size - M -  1) printf(" ");	
	}
	return 0;
	
}
*/



int gcd(int a, int b)
{
	if (b == 0) return a;
	else
	{
		return gcd(b, a % b);
	}
}
int main(){
	int a[110];
	int n, m, temp, pos, next;
	//tempΪ��ʱ������pos��ŵ�ǰ�����λ�ã�nextΪ��һ��Ҫ�����λ��
	scanf("%d%d", &n, &m);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	m = m % n;
	if (m != 0)
	{
		int d = gcd(m, n);
		for (int i = n - m; i < n - m + d; i++)
		{
			temp = a[i];
			pos = i;
			do
			{
				//��һ��Ҫ�����λ�� 
				next = (pos - m + n)  % n;  //��֤�����߽� 
				//�����һ��λ�ò��ǳ�ʼ��
				//�����һ��λ�õ�Ԫ�ظ�ֵ����ǰ����λ��
				if (next != i) a[pos] = a[next];
				else a[pos] = temp; // ��һ��ʼ���ߵ�Ԫ�ظ�ֵ����������λ
				pos = next; 
			}while(pos != i);
		}
	}
	for (int i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if(i < n - 1) printf(" ");
	}
	return 0; 
}
