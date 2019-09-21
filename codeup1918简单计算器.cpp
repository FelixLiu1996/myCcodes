#include<cstdio>
#include<iostream>
#include<string>
#include<queue>
#include<stack>
#include<map>
using namespace std;

struct node{
	double num;  //操作数 
	char op;	 //操作符 
	bool flag;	 //true 为操作数， false为操作符 
};

string str;
stack<node> st;
queue<node> q;
map<char, int> op;

void Change()
{
	double num;
	node temp;
	for(int i = 0; i < str.length(); )
	{
		if(str[i] >= '0' && str[i] <= '9')
		{
			temp.flag = true;
			temp.num = str[i++] - '0';
			//数字位数可能不止1 需要合并加入后缀表达式队列 
			while(i < str.length() && str[i] >= '0' && str[i] <= '9')
			{
				temp.num = temp.num * 10 + (str[i] - '0');
				i++; 
			}
			q.push(temp);
		}else{
			temp.flag = false;
			//如果op操作符优先级<=栈顶元素优先级 则压出栈顶元素直到op > top 
			while(!st.empty() && op[str[i]] <= op[st.top().op])
			{
				q.push(st.top());
				st.pop();
			}
			temp.op = str[i];
			st.push(temp);  //将此操作符加入操作符栈 
			i++;
		}
		while(!st.empty()) //将剩下的操作符加入后缀表达式队列 
		{
			q.push(st.top());
			st.pop();
		}
	}
}

double Cal()
{
	double temp1, temp2;
	node cur, temp;
	while(!q.empty())
	{
		cur = q.front();
		q.pop();
		if(cur.flag == true)
		{
			st.push(cur);
		}
	 	//如果是操作符 则将栈中元素弹出两个 弹出顺序 分别为操作数2 操作数1
	 	//计算之后将结果压入栈中 
		else   
		{
			temp2 = st.top().num;
			st.pop();
			temp1 = st.top().num;
			st.pop();
			if(cur.op == '+') temp.num = temp1 + temp2;
			else if(cur.op == '-') temp.num = temp1 - temp2;
			else if(cur.op == '*') temp.num = temp1 * temp2;
			else temp.num = temp1 / temp2;
			st.push(temp);
		}
	}
	return st.top().num;
}

int main(){
	op['+'] = op['-'] = 1; 
	op['*'] = op['/'] = 2;
	while(getline(cin, str), str != "0")
	{
		string::iterator it = str.begin();
		for(it; it != str.end(); it++)   //删掉空格 
		{
			if(*it == ' ')  str.erase(it);
		}
		while(!st.empty())  st.pop();   //初始化栈 
		Change();  //中缀表达式变成后缀表达式 
		printf("%.2f\n", Cal());
	}
	return 0;
}
