#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<iostream>
using namespace std;
struct student{
	int ID;
	int grade[4];
}stu[2010];

char course[4] = {'A', 'C', 'M', 'E'};
int rank[1000000][4] = {0};  //rank[id][0]~rank[id][3] Ϊ4�Ź��ζ�Ӧ������
int now; //cmp������ʹ�ã���ʾ��ǰ��now�ŷ�������
bool cmp(student a, student b)
{
	return a.grade[now] > b.grade[now];
}

int main(){
	int n, m;
	scanf("%d%d", &n, &m);
	//�������  [0]~[3]�ֱ����A,C,M,E 
	for(int i = 0; i < n; i++)
	{
		scanf("%d%d%d%d", &stu[i].ID, &stu[i].grade[1], &stu[i].grade[2], 
		&stu[i].grade[3]);
		stu[i].grade[0] = ((stu[i].grade[1] + stu[i].grade[2] + stu[i].grade[3]) / 3.0);
	}
	//ö��A, C, M, E  �������� 
	for(now = 0; now < 4; now++)
	{
		sort(stu, stu + n, cmp);
		rank[stu[0].ID][now] = 1;  //����֮�󣬷�����ߵ�����Ϊ1 
		for(int i = 1; i < n; i++)  //ʣ�µĿ��� 
		{	
			//����֮ǰ�Ŀ���������ͬ 
			if(stu[i].grade[now] == stu[i - 1].grade[now])
			{
				rank[stu[i].ID][now] = rank[stu[i - 1].ID][now];
			}else{
				rank[stu[i].ID][now] = i + 1;
			}
		}
	}
	int query; //��ѯid
	for(int i = 0; i < m; i++)
	{
		scanf("%d", &query);
		if(rank[query][0] == 0)  //���������� 
		{
			printf("N/A\n");
		}else{
			int k = 0;      //ѡ��rank[query][0~3]����С�� ��Ϊ������ߵ� 
			for(int j = 0; j < 4; j++)  
			{
				if(rank[query][j] < rank[query][k])
				{
					k = j;
				}
			}
			printf("%d %c\n", rank[query][k], course[k]);
		}
	} 
	return 0;
}