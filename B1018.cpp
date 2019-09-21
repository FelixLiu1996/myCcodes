#include<stdio.h>
int main()
{
	int N;
	int a_win = 0, a_lose = 0, a_ping = 0, b_win = 0, b_lose =0, b_ping = 0;
	int a_c = 0,  a_b = 0,  a_j = 0, b_c = 0, b_b = 0, b_j = 0;
	scanf("%d", &N);
	char a[N], b[N];
	for (int i = 0; i < N; i++)
	{
		scanf("%s%s", &a[i], &b[i]);	
	}
	for (int i = 0; i < N; i++)
	{
		if (a[i]=='C')
		{
			if (b[i] == 'C')
			{
				a_ping++;
				b_ping++;
				a_c++;
				b_c++;
			}
			if (b[i] == 'J')
			{
				a_win++;
				b_lose++;
				a_c++;
			}
			if (b[i] == 'B')
			{
				a_lose++;
				b_win++;
				b_b++;
			}
		}
		if (a[i] == 'J')
		{
			if (b[i] == 'C')
			{
				a_lose++;
				b_win++;
				b_c++;
			}
			if (b[i] == 'J')
			{
				a_ping++;
				b_ping++;
				a_j++;
				b_j++;
			}
			if (b[i] == 'B')
			{
				a_win++;
				b_lose++;
				a_b++;
			}
		}
		if (a[i] == 'B')
		{
			if (b[i] == 'C')
			{
				a_win++;
				b_lose++;
				a_b++;
			}
			if (b[i] == 'J')
			{
				a_lose++;
				b_win++;
				b_j++;
			}
			if (b[i] == 'B')
			{
				a_ping++;
				b_ping++;
				a_b++;
				b_b++;
			}
		}
	}
	printf("%d %d %d\n%d %d %d\n", a_win, a_ping, a_lose, b_win, b_ping, b_lose);
	if (a_c > a_j && a_c > a_b)
	{
		if (b_c > b_j && b_c > b_b)
		{
			printf("C C");
		}
		if (b_j > b_c && b_j > b_b)
		{
			printf("C J");
		}
		if (b_b > b_c && b_b > b_j)
		{
			printf("C B");
		}
		if (b_c == b_j && b_c > b_b)
		{
			printf("C C");
		}
		if (b_c == b_b && b_c > b_j)
		{
			printf("C B");
		}
		if (b_j == b_b && b_j > b_c)
		{
			printf("C B");
		}
		if (b_c == b_j && b_j == b_b)
		{
			printf("C B");
		}
	}
	if (a_j > a_c && a_j > a_b)
	{
		if (b_c > b_j && b_c > b_b)
		{
			printf("J C");
		}
		if (b_j > b_c && b_j > b_b)
		{
			printf("J J");
		}
		if (b_b > b_c && b_b > b_j)
		{
			printf("J B");
		}
		if (b_c == b_j && b_c > b_b)
		{
			printf("J C");
		}
		if (b_c == b_b && b_c > b_j)
		{
			printf("J B");
		}
		if (b_j == b_b && b_j > b_c)
		{
			printf("J B");
		}
		if (b_c == b_j && b_j == b_b)
		{
			printf("J B");
		}
	}
	if (a_b > a_c && a_b > a_j)
	{
		if (b_c > b_j && b_c > b_b)
		{
			printf("B C");
		}
		if (b_j > b_c && b_j > b_b)
		{
			printf("B J");
		}
		if (b_b > b_c && b_b > b_j)
		{
			printf("B B");
		}
		if (b_c == b_j && b_c > b_b)
		{
			printf("B C");
		}
		if (b_c == b_b && b_c > b_j)
		{
			printf("B B");
		}
		if (b_j == b_b && b_j > b_c)
		{
			printf("B B");
		}
		if (b_c == b_j && b_j == b_b)
		{
			printf("B B");
		}
	}
	if (a_c == a_j && a_c > a_b)
	{
		if (b_c > b_j && b_c > b_b)
		{
			printf("C C");
		}
		if (b_j > b_c && b_j > b_b)
		{
			printf("C J");
		}
		if (b_b > b_c && b_b > b_j)
		{
			printf("C B");
		}
		if (b_c == b_j && b_c > b_b)
		{
			printf("C C");
		}
		if (b_c == b_b && b_c > b_j)
		{
			printf("C B");
		}
		if (b_j == b_b && b_j > b_c)
		{
			printf("C B");
		}
		if (b_c == b_j && b_j == b_b)
		{
			printf("C B");
		}
	}
	if (a_c == a_b && a_c > a_b)
	{
		if (b_c > b_j && b_c > b_b)
		{
			printf("B C");
		}
		if (b_j > b_c && b_j > b_b)
		{
			printf("B J");
		}
		if (b_b > b_c && b_b > b_j)
		{
			printf("B B");
		}
		if (b_c == b_j && b_c > b_b)
		{
			printf("B C");
		}
		if (b_c == b_b && b_c > b_j)
		{
			printf("B B");
		}
		if (b_j == b_b && b_j > b_c)
		{
			printf("B B");
		}
		if (b_c == b_j && b_j == b_b)
		{
			printf("B B");
		}	
	}
	if (a_j == a_b && a_j > a_c)
	{
		if (b_c > b_j && b_c > b_b)
		{
			printf("B C");
		}
		if (b_j > b_c && b_j > b_b)
		{
			printf("B J");
		}
		if (b_b > b_c && b_b > b_j)
		{
			printf("B B");
		}
		if (b_c == b_j && b_c > b_b)
		{
			printf("B C");
		}
		if (b_c == b_b && b_c > b_j)
		{
			printf("B B");
		}
		if (b_j == b_b && b_j > b_c)
		{
			printf("B B");
		}
		if (b_c == b_j && b_j == b_b)
		{
			printf("B B");
		}
	}
	if (a_c == a_j && a_j == a_b)
	{
		if (b_c > b_j && b_c > b_b)
		{
			printf("B C");
		}
		if (b_j > b_c && b_j > b_b)
		{
			printf("B J");
		}
		if (b_b > b_c && b_b > b_j)
		{
			printf("B B");
		}
		if (b_c == b_j && b_c > b_b)
		{
			printf("B C");
		}
		if (b_c == b_b && b_c > b_j)
		{
			printf("B B");
		}
		if (b_j == b_b && b_j > b_c)
		{
			printf("B B");
		}
		if (b_c == b_j && b_j == b_b)
		{
			printf("B B");
		}
	}
	return 0;
}
