#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
struct Student{
	char id[20];
	int score_de;
	int score_cai;
	int sum;  // 总分 
	int flag; //  分类 
}stu[100010];
bool cmp(Student a, Student b)
{
	if (a.flag != b.flag)  return a.flag < b.flag;
	else if (a.sum != b.sum)  return a.sum > b.sum;
	else if (a.score_de != b.score_de)  return a.score_de > b.score_de;
	else  return strcmp(a.id, b.id) < 0;	
}
int main()
{
	int N, L, H;
	scanf("%d %d %d", &N, &L, &H);
	int m = N;
	for (int i = 0; i < N; i++)
	{
		scanf("%s %d %d", stu[i].id, &stu[i].score_de, &stu[i].score_cai);
		stu[i].sum = stu[i].score_de + stu[i].score_cai;
	 	if (stu[i].score_de < L || stu[i].score_cai < L)    //这个不及格的顺序只能放在前面 
		{
			m--;
			stu[i].flag = 5;
		}		
	 	else if (stu[i].score_de >= H && stu[i].score_cai >= H)
		{
			stu[i].flag = 1;
		}
		else if (stu[i].score_de >= H && stu[i].score_cai < H)
		{
			stu[i].flag = 2;
		}
		else if (stu[i].score_de >= stu[i].score_cai)
		{
			stu[i].flag = 3;
		}

		else stu[i].flag = 4;

	}
	printf("%d\n", m);
	sort(stu, stu + N, cmp);
	for (int i = 0; i < m; i++)
	{
		printf("%s %d %d\n", stu[i].id, stu[i].score_de, stu[i].score_cai);
	}
	return 0;
}
