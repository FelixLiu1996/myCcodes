#include<cstdio>
#include<queue>
using namespace std;
const int manx = 1010;
struct mouse{
	int weight;
	int rank;
};
int main(){
	int NP, NG, order;  //�������Լ�ÿ������������� 
	int temp, group;
	scanf("%d%d", &NP, &NG);
	mouse mice[NP];
	for(int i = 0; i < NP; i++)
	{
		scanf("%d", &mice[i].weight);
	}
	queue<int> q;
	for(int i = 0; i < NP; i++)  //��˳������������������ 
	{
		scanf("%d", &order);
		q.push(order);
	}
	temp = NP;  //��������������� 
	while(q.size() != 1) // ������� 
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
			int k = q.front();  //��¼ÿ���������������� 
			for(int j = 0; j < NG; j++)
			{
				if(i * NG + j >= temp) break;  //���һ����������������ʱ����Ҫ���� 
				int front = q.front();  //��������ı�� 
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
