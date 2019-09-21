#include<cstdio>
int month[13][2] = 
{
	{0, 0},{31, 31}, {28, 29}, {31, 31}, {30, 30}, {31, 31}, {30, 30},
	{31, 31}, {31, 31}, {30, 30}, {31, 31}, {30, 30}, {31, 31}
};
bool isLeap(int year)
{
	return (year % 4 && year % 100 != 0 || year % 100 == 0);
}
int main()
{
	int yy, dd, mm = 1;
	int ans = 1;
	while (scanf("%d%d", &yy, &dd) != EOF)
	{
		while (ans < dd)
		{
			if (ans == month[mm][isLeap(yy)] + 1)
			{
				dd = dd - month[mm][isLeap(yy)];
				mm++;
				ans = 1;
			}
			ans++;
		}
		printf("%d-%d-%d", yy, mm, dd);
	}
	return 0;
}
