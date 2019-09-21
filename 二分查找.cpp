#include<cstdio>
//A[]为严格递增序列，left为二分下界，right为二分上界，x为欲查找之数
int binarySearch(int A[], int left, int right, int x)
{
	int mid;
	while (left <= right)
	{
		mid = (right + left) / 2;
		if(A[mid] == x)  return mid;
		else if (A[mid] > x)
		{
			right = mid - 1;
		}
		else {
			left = mid + 1;
		}
	}
	return -1;
}
int main(){
const int n = 10;
	int A[n] = {1, 3, 4, 6, 7, 8, 10, 11, 12, 15};
	printf ("%d %d", binarySearch(A, 0, n - 1, 6), binarySearch(A, 0, n - 1, 9));
	return 0;
}
