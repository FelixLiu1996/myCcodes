#include<cstdio>
int main(){
	char str[5] = {'S', 'H', 'C', 'D', 'J'};
	int start[55], end[55], temp[55];
	int t;
	scanf("%d", &t);
	for(int i = 1; i <= 54; i++)
	{
		start[i] = i;
	}
	for(int i = 1; i <= 54; i++)// ´æ·Å»»µÄÎ»ÖÃ 
	{
		scanf("%d", &temp[i]);
	}
	while(t){
		for(int i = 1; i <= 54; i++)
		{
			end[temp[i]] = start[i];
		}
		for(int i = 1; i <= 54; i++)
		{
			start[i] = end[i];
		}
		t--;
	}
	for(int i = 1; i <= 54; i++)
	{
		printf("%c%d", str[(end[i] - 1) / 13], (end[i] - 1) % 13 + 1);
		if(i < 54) printf(" ");
	}
	return 0;
}
