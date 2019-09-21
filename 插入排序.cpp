#include<cstdio>
int main()
{
	int a[10];
	int i;
	for (i = 0; i < 9; i++)
	{
		scanf("%d", &a[i]);
	}
//	printf("\n");
	scanf("%d", &a[9]);
	for (i = 0; i < 9; i++)
	{
		if (a[i] > a[9])
		{
			int t = a[9];
			a[9] = a[i];
			a[i] = t;
			int j;
			for (j = i + 1; j < 10; j++)
			{
				int k = a[9];
				a[9] = a[j];
				a[j] = k;
			}
		}
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", a[i]);
	}
	return 0;
}