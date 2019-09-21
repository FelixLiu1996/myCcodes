#include<cstdio>
int main(){
	int a, b, d;
	int sum, z[40],num = 0;
	scanf("%d%d%d", &a, &b, &d);
	sum = a + b;
	do{
		z[num++] = sum % d;
		sum = sum / d;
	}while (sum != 0);
	for (int i = num - 1; i >= 0; i--)
	{
		printf("%d", z[i]);
	}
	printf("\n");
	return 0;
}
