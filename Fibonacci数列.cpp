#include<cstdio>
/*
using namespace std;
int main()
{
	int f1 = 1, f2 = 1;
	int n, i;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		f1 = f1 + f2;
		f2 = f1 + f2;
		printf("%d %d", f1, f2);
	}
//	printf("%d", f1);
	return 0;
}
*/
int F(int n)
{
	if (n == 1 || n == 0) return 1;
	else  return F(n - 1) + F(n - 2);
}
int main(){
	int n;
	scanf ("%d", &n);
	printf("%d\n", F(n));
	return 0;
}
