#include<cstdio>
int low_bound(int A[], int left, int right, int x)  //找到第一个>=x 的位置 
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
int upper_bound(int A[], int left, int right, int x)  //找到第一个比x大的位置 
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
//   解决“寻找有序序列第一个满足条件的元素的位置”的解题模板
int solve(int left, int right)
{
	int mid;
	while (left < right)
	{
		mid = (left + right) / 2;
		if (条件成立)
		{
			right = mid;
		}
		else {
			left = mid + 1;
		} 
	}
	return left;
} 
