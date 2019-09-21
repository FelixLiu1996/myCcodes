#include<stdio.h>
int main(){
	int circle, sum1 = 0, sum2 = 0;
	int han1, han2, hua1, hua2;
	scanf("%d", &circle);
	for (int i = 1; i <= circle; i++)
	{
		scanf("%d%d%d%d", &han1, &hua1, &han2, &hua2);
		if (hua1 != hua2){
			if (hua1 == han1 + han2)
			{
				sum2 +=1;
			}
			else if (hua2 == han1 + han2)
			{
				sum1 += 1;
			}
		}
		
	}
	printf("%d %d", sum1, sum2);
	return 0;
}
