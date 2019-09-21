#include<cstdio>
#include<cstring>
int main(){
	int w[17] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
	char change[12] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
	int n;
	bool flag = true;
	scanf ("%d", &n);
	for (int i = 0; i < n; i++)
	{
		char str[20];
		scanf("%s", str);
		int j, sum = 0;
		for (j = 0; j < 17; j++)
		{
			if (!(str[j] >= '0' && str[j] <= '9'))  break;
			sum = sum + (str[j] - '0') * w[j];
		}
		if (j < 17)
		{
			flag = false;
			printf("%s\n", str);
		}
		else {
			int z = sum % 11;
			if (change[z] != str[17])
			{
				flag = false;
				printf("%s\n", str);
			}
		}
	}
	if (flag == true)
	{
		printf("All passed");
	}
	return 0;
}
