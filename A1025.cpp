#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
struct Student{
	char id[20];
	int score;
	int kaochang;
	int r;
	int kaochang_r;
}testee[30010];
bool cmp(Student a, Student b)
{
	if (a.score != b.score) return a.score > b.score;
	else return strcmp(a.id, b.id) < 0; 
}
int main(){
	int n, k, num = 0;  // n为考场数，k为每个考场的考生数，num为考生总人数 
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &k);
		for (int j = 0; j < k; j++)
		{
			scanf("%s %d", testee[num].id, testee[num].score);
			testee[num].kaochang = i + 1; //记录考生的考场号 
			num++;
		}
		sort(testee + num - k, testee + num, cmp);  //每个考场的考生进行排序 
		testee[num - k].kaochang_r = 1;
		for (int j = num - k + 1; j < num; j++)
		{
			if (testee[j].score == testee[j - 1].score)
			{
				testee[j].kaochang_r = testee[j - 1].kaochang_r;
			}
			else
			{
				testee[j].kaochang_r = j + 1 -(num - k);
			}
		}	
	}
	printf("%d\n", num);
	sort(testee, testee + num, cmp);
	testee[0].r = 1;
	for (int i = 1; i <= num; i++)
	{
		if (testee[i].score == testee[i - 1].score)  
		{
  			testee[i].r = testee[i - 1].r;
		}
		else 
		{
			testee[i].r = i + 1;
		}
	}
	for (int i = 0; i < num; i++)
	{
		printf("%s %d %d %d\n", testee[i].id, testee[i].r, testee[i].kaochang, testee[i].kaochang_r);
	}
	return 0;
}
