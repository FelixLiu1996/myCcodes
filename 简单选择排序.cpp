void Selectsort(){
	for (int i = 1; i <= n; i++)
	{
		int k = i;
		for (int j = i; i <= n; i++)
		{
			if (A[j] < A[k])
			k = j;         //K下标记录着最小的元素的位置 
		}	
		int temp = A[i];
		A[i] = A[k];
		A[k] = temp;
	}
}