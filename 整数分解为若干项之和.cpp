#include<cstdio>
#define MAXN 30
int Terms[MAXN];
int N;
int Count;
void Search(int Remainder, int Start, int nTerm);
int main(){
	scanf("%d", &N);
	Count = 0;
	Search(N, 1, 0);
	if(Count % 4 != 0)
	{
		printf("\n");
	}
	return 0;
	
}
void Search(int Remainder, int Start, int nTerm)
{
	int i;
	if(Remainder == 0)
	{
		Count++;
		if(Count % 4 != 1)  printf(";");
		printf("%d=%d", N, Terms[0]);
		for(int i = 1; i < nTerm; i++)
		{
			printf("+%d", Terms[i]);
		}
		if(Count % 4 == 0)  printf("\n");
	}
	else{
		for(i = Start; i <= Remainder; i++)
		{
			Terms[nTerm] = i;
			Search(Remainder - i, i, nTerm + 1);
		}
	}
}