#include<cstdio>
#include<cstring>
struct stu{
	char id[15];
	char name[15];
	int score;
}female, male, temp;

int main(){
	int n;
	char gender;
	male.score = 101, female.score = -1;  //初始化男生和女生的成绩 
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%s %c %s %d", &temp.name, &gender, &temp.id, &temp.score);
		if(gender == 'M' && temp.score < male.score)
		{
			male = temp;
		}
		if(gender == 'F' && temp.score > female.score)
		{
			female = temp;
		}
	}
	if(female.score == -1)
	{
		printf("Absent\n");
	}else{
		printf("%s %s\n", female.name, female.id);
	}
	if(male.score == 101)
	{
		printf("Absent\n");
	}else{
		printf("%s %s\n", male.name, male.id);
	}
	if(female.score == -1 || male.score == 101)
	{
		printf("NA\n");
	}else{
		printf("%d\n", female.score - male.score);
	}
	return 0;
}
