#include<cstdio>
int low_bound(int A[], int left, int right, int x)  //�ҵ���һ��>=x ��λ�� 
{
	int mid;
	while (left < right)
	{
		mid = (left + right) / 2;
		if (A[mid] >= x)
		{
			right = mid;
		}
		else {
			left = mid + 1;
		}
	}
	return left;
}
int upper_bound(int A[], int left, int right, int x)  //�ҵ���һ����x���λ�� 
{	
	int mid;
	while (left < right)
	{
		mid = (left + right) / 2;
		if (A[mid] > x)
		{
			right = mid;
		}
		else {
			left = mid + 1;
		}
	}
	return left;
}
//   �����Ѱ���������е�һ������������Ԫ�ص�λ�á��Ľ���ģ��
int solve(int left, int right)
{
	int mid;
	while (left < right)
	{
		mid = (left + right) / 2;
		if (��������)
		{
			right = mid;
		}
		else {
			left = mid + 1;
		} 
	}
	return left;
} 
