#include<cstdio>
#include<stack>
using namespace std;
const int maxn = 1010;
int main(){
	stack<int> st;
	int array_out[maxn];
	int M, N, K;
	scanf("%d%d%d", &M, &N, &K);
	for(int i = 1; i <= K; i++)  //��Ҫ��������и��� 
	{
		for(int i = 1; i <= N; i++)
		{
			scanf("%d", &array_out[i]);
		}
		int pos = 1;
		bool flag = true;   //��������true�����YES 
		for (int i = 1; i <= N; i++)  //��1~N��˳��ѹ��ջ 
		{
			st.push(i);
			if(st.size() > M)  //��������ֱ���ж����д��� 
			{
				flag = false;
				break;
			}
			//���ջ�ǿգ���ջ��Ԫ���뵱ǰ����Ԫ����ȣ���ѹ��ջ 
			while(!st.empty() && st.top() == array_out[pos])
			{
				st.pop();
				pos++;
			}
		}
		if(st.empty() == true && flag == true)  //ջ��Ԫ�ر���� 
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
		while(!st.empty())   //���ջ ������һ�β��� 
		{
			st.pop();
		}
	}
	return 0;
}