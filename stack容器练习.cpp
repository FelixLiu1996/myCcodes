#include<cstdio>
#include<stack>
using namespace std;

/*
int main(){
	stack<int> st;
	for(int i = 1; i <= 5; i++)
	{
		st.push(i);  //将i加入栈 
	} 
	//弹出栈顶元素
	for(int i = 1; i <= 3; i++)
	{
		st.pop();
	} 
	printf("%d\n", st.top());  //只能用top()访问栈顶元素 
	return 0;
}
*/
/*
int main(){
	stack<int> st;
	if(st.empty() == true)
	{
		printf("Empty\n");
	}else{
		printf("Not empty\n");
	}
	st.push(1);
	if(st.empty() == true)
	{
		printf("Empty\n");
	}else{
		printf("Not empty\n");
	}
	return 0;	
}
*/
/*
int main(){
	stack<int> st;
	for(int i = 1; i <= 5; i++)
	{
		st.push(i);
	}
	printf("%d\n", st.size());
	//栈的清空需要通过循环
	while(!st.empty())
	{
		st.pop();	
	}
	printf("%d\n", st.size());
	return 0;
}
*/

int main(){
	int temp1, temp2;
	stack<int> st;
	for(int i = 1; i <= 5; i++)
	{
		st.push(i);
	}
	temp1 = st.top();
	st.pop();
	temp2 = st.top();
	st.pop();
	printf("%d %d", temp1, temp2);
	return 0;
}
