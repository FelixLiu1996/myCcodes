#include<stdio.h>
#include<string.h>
struct stuInfo{
	char name[15], id[15];
	int score;	
};
int main()
{
	int n, score_max = -1, score_min = 101;
	scanf("%d", &n);
	stuInfo student[n];
	char max_name[15], max_id[15], min_name[15], min_id[15];
	for (int i = 0; i < n; i++)
	{
		scanf("%s%s%d", &student[i].name, &student[i].id, &student[i].score);
		if (student[i].score >= score_max)
		{
			score_max = student[i].score;
			for (int j = 0; j < 15; j++)
			{
				max_name[j] = student[i].name[j];
				max_id[j] = student[i].id[j];
			}
		}
		if (student[i].score <= score_min)
		{
			score_min = student[i].score;
			strcpy(min_name, student[i].name);//可用 string库函数直接复制字符串 
			strcpy(min_id, student[i].id);
			/*
			for (int j = 0; j < 15; j++)
			{
				min_name[j] = student[i].name[j];
				min_id[j] = student[i].id[j];
			}
			*/
		}
	}
	printf("%s %s\n", max_name, max_id);
	printf("%s %s\n", min_name, min_id);
	return 0;	
}
