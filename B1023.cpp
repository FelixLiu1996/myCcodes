#include<cstdio>
int main(){
	int count[10];
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &count[i]);
	}
	for (int i = 1; i < 10; i++)
	{
		if (count[i] > 0)
		{
			printf("%d", i);
			count[i]--;
			break;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		for (count[i]; count[i] > 0; count[i]--)
		{
			printf("%d", i);
		}
	}
	printf("\n");
	return 0;
}