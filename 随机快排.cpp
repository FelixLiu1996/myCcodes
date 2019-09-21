#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<ctime>
#include<algorithm>
using namespace std;
int randPartition(int A[], int left, int right)
{
	srand((unsigned)time(NULL));
	int temp = A[(int) round(1.0 * rand() / RAND_MAX * (right - left) + left)];
	swap(temp, A[left]);
	while (left < right)
	{
		while (left < right && A[right] > temp) right--;
		A[left] = A[right];
		while (left < right && A[left] <= temp)  left++;
		A[right] = A[left];
	}
	A[left] = temp;
	return left;
}
void quickSort(int A[], int left, int right)
{
	if (left < right)
	{
		int pos = randPartition(A, left, right);
		randPartition(A, left, pos - 1);
		randPartition(A, pos + 1, right);
	}
}
int main(){
	int A[10] = {6, 5, 7, 8, 9, 3, 1, 2, 4, 0};
	quickSort(A, 0, 9);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", A[i]);
	}
	printf("\n");
	return 0;
}