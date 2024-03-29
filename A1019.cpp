#include<cstdio>
bool judge(int z[], int num)
{
	for (int i = 0; i < num / 2; i++)
	{
		if (z[i] != z[num - i - 1])
		{
			return false;
		}
	}
	return true;	
}
int main(){
	int n, b;
	scanf("%d%d", &n, &b);
	int z[40], num = 0;
	do {
		z[num++] = n % b;
		n = n / b;
	} while (n != 0);
	if (judge(z, num)) printf("Yes\n");
	else printf("No\n");
	for (int i = num - 1; i >= 0; i--)
	{
		printf("%d", z[i]);
		if (i != 0) printf(" ");
	}
	printf("\n");
	return 0;
}
