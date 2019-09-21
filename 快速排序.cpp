#include<cstdio>
#include<cstdlib>
#include<ctime>
#include<cmath>
int Partition(int A[], int left, int right)
{
	int temp = A[left];
	while (left < right)
	{
		while (left < right && A[right] > temp)  right--;
		A[left] = A[right];
		while (left < right && A[left] <= temp)  left++;
		A[right] = A[left];
	}
	A[right] = temp;
	return right;
}
void quickSort(int A[], int left, int right)
{
	if(left < right)
	{
		int pos = Partition(A, left, right);
		quickSort(A, left, pos - 1);    //对左子区间进行快速排序 
		quickSort(A, pos + 1, right);   //对右子区间进行快速排序 
	}
}
int main()
{
	srand((unsigned)time(NULL));
	for(int i = 0; i < 10; i++)
	{
		printf("%d ", rand() % 2);  //生成[0，1]的随机数 
	}
	printf("\n");
	for(int i = 0; i < 10; i++)  //生成[3,7]的随机数 
	{
		printf("%d ", rand() % 5 + 3);
	}
	printf("\n");
	for(int i = 0; i < 10; i++)
	{
		printf("%d ", (int)round(1.0 * rand() / RAND_MAX * 50000 + 10000));
	}
	return 0;
}

