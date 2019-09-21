#include<stdio.h>
int main(){
	int N;
	int A1 = 0 , A2 = 0, A3 = 0, A5 = 0, sum = 0;
	float A4 = 0.0;
	scanf("%d", &N);
	int a[N];
	int Max = 0, count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0,j = 1;
	for (int i = 0; i < N; i++){
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < N; i++)
	{
		if (a[i] % 5 == 0)
		{
			if (a[i] % 2 == 0)
			{
				A1 += a[i];
				count1++;
			}
		}
	}
	for (int i = 0; i < N; i++)
	{
		if (a[i] % 5 == 1)
		{
			
			A2 +=a[i]*j;
			j = j * (-1);
			count2++;
		}
	}
	for (int i = 0; i < N; i++)
	{
		if (a[i] % 5 == 2)
		{
			count3++;
		}
	}
	A3 = count3;
	for (int i = 0; i < N; i++)
	{
		if (a[i] % 5 == 3)
		{
			sum += a[i]; 
			count4++;
		}
	}
	if (count4 == 0){
		A4 = 0.0;
	}
	else A4 = (float)(sum) / (float) (count4);
	for (int i = 0; i < N; i++)
	{
		if (a[i] % 5 == 4)
		{
			if (Max < a[i])
			{
				Max = a[i];
				count5++;
			}	
		}
	}
	A5 = Max;
	if (A1 == 0) printf("N ");
	else printf("%d ", A1);
	if (count2 == 0) printf("N ");
	else printf("%d ", A2);
	if (A3 == 0) printf("N ");
	else printf("%d ", A3);
	if (A4 == 0.0) printf("N ");
	else printf("%.1f ", A4);
	if (A5 == 0) printf("N");
	else printf("%d", A5);
	return 0;
}
