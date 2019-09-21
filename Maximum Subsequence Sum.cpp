#include<cstdio>
const int maxn = 10010;

int main(){
	int List[maxn], n, left, right, temp;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &List[i]);
	}
	int j;
	for(j = 0; j < n; j++)
	{
		if(List[j] >= 0)  break;
	}
	if(j == n)  printf("0 %d %d", List[0], List[n - 1]);
	else{
		int thissum, Maxsum;
		thissum = Maxsum = 0;
		int i = 0;
		left = right = 0;
		for(i; i < n; i++)
		{
			thissum += List[i];
		
			if(thissum > Maxsum)
			{
				Maxsum = thissum;
				left = temp;
				right = List[i];
			}
			else if(thissum < 0)
			{
				thissum = 0;
				temp = List[i + 1];
			}
		}
		printf("%d %d %d\n", Maxsum, left, right);
	}
	return 0;
}
