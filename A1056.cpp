#include<cstdio>
#include<queue>
using namespace std;
const int manx = 1010;
struct mouse{
	int weight;
	int rank;
};
int main(){
	int NP, NG, order;  //总数量以及每组最多所含数量 
	int temp, group;
	scanf("%d%d", &NP, &NG);
	mouse mice[NP];
	for(int i = 0; i < NP; i++)
	{
		scanf("%d", &mice[i].weight);
	}
	queue<int> q;
	for(int i = 0; i < NP; i++)  //按顺序将老鼠的重量加入队列 
	{
		scanf("%d", &order);
		q.push(order);
	}
	temp = NP;  //参赛的老鼠的数量 
	while(q.size() != 1) // 分组比赛 
	{
		if(temp % NG  == 0)
		{
			group = temp / NG;
		}
		else
		{
			group = temp / NG + 1;
		}
		for(int i = 0; i < group; i++)
		{
			int k = q.front();  //记录每组质量最大的老鼠编号 
			for(int j = 0; j < NG; j++)
			{
				if(i * NG + j >= temp) break;  //最后一组老鼠数量不够的时候需要特判 
				int front = q.front();  //队首老鼠的编号 
				if(mice[front].weight > mice[k].weight)
				{
					k = front;
				}
				mice[front].rank = group + 1;
				q.pop();
			}
			q.push(k);
		}
		temp = group;
	}
	mice[q.front()].rank = 1;
	for(int i = 0; i < NP; i++)
	{
		printf("%d", mice[i].rank);
		if(i != NP - 1)
		{
			printf(" ");
		}
	}
	return 0;
}
