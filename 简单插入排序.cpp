int A[maxn], n;   //假设 n 为元素个数， 数组下标从1~n 
void insertSort(){
	for (int i = 2; i <= n; i++)
	{
		int temp = A[i], j = i;
		while (j > 1 && temp < A[j - 1])
		{
			A[j] = A[j - 1];
			j--;
		}
		
	}
}