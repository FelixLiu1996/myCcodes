#include<cstdio>
#include<stack>
using namespace std;
const int maxn = 1010;
int main(){
	stack<int> st;
	int array_out[maxn];
	int M, N, K;
	scanf("%d%d%d", &M, &N, &K);
	for(int i = 1; i <= K; i++)  //需要检验的序列个数 
	{
		for(int i = 1; i <= N; i++)
		{
			scanf("%d", &array_out[i]);
		}
		int pos = 1;
		bool flag = true;   //如果最后是true就输出YES 
		for (int i = 1; i <= N; i++)  //将1~N按顺序压入栈 
		{
			st.push(i);
			if(st.size() > M)  //超过容量直接判断序列错误 
			{
				flag = false;
				break;
			}
			//如果栈非空，且栈顶元素与当前序列元素相等，则压出栈 
			while(!st.empty() && st.top() == array_out[pos])
			{
				st.pop();
				pos++;
			}
		}
		if(st.empty() == true && flag == true)  //栈内元素被清空 
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
		while(!st.empty())   //清空栈 进行下一次操作 
		{
			st.pop();
		}
	}
	return 0;
}