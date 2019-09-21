#include <cstdio>
#include <cstring>
struct person{
	char name[20];
	int count;	
};
person leader[3] = {"Li", 0, "Zhang", 0, "Fun", 0};
int main()
{
	int n;
	printf("Type a number\n");
	scanf("%d\n",&n);
	char piao[n][10];
	char Li[10] = "Li";
	char Zhang[10] = "Zhang";
	char Fun[10] = "Fum";
	for (int i = 0; i < n; i++)
	{
		scanf("%s\n",piao[i]);
	}
	for (int i = 0; i < n; i++)
	{
		if (strcmp(piao[i][10], ) == 0)
		{
			Li.count += 1;
		}
		else if(strcmp(piao[i][10], Zhang) == 0)
		{
			Zhang.count +=1;
		}
		else if (strcmp(piao[i][10], Fun) == 0)
		{
			Fun.count +=1;
		}
	}
	for (i = 0; i < 3; i++)
	{
		printf("%s: %d", leader[i].name, leader[i].count);
	}
	return 0;
}
