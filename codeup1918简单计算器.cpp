#include<cstdio>
#include<iostream>
#include<string>
#include<queue>
#include<stack>
#include<map>
using namespace std;

struct node{
	double num;  //������ 
	char op;	 //������ 
	bool flag;	 //true Ϊ�������� falseΪ������ 
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
			//����λ�����ܲ�ֹ1 ��Ҫ�ϲ������׺���ʽ���� 
			while(i < str.length() && str[i] >= '0' && str[i] <= '9')
			{
				temp.num = temp.num * 10 + (str[i] - '0');
				i++; 
			}
			q.push(temp);
		}else{
			temp.flag = false;
			//���op���������ȼ�<=ջ��Ԫ�����ȼ� ��ѹ��ջ��Ԫ��ֱ��op > top 
			while(!st.empty() && op[str[i]] <= op[st.top().op])
			{
				q.push(st.top());
				st.pop();
			}
			temp.op = str[i];
			st.push(temp);  //���˲��������������ջ 
			i++;
		}
		while(!st.empty()) //��ʣ�µĲ����������׺���ʽ���� 
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
	 	//����ǲ����� ��ջ��Ԫ�ص������� ����˳�� �ֱ�Ϊ������2 ������1
	 	//����֮�󽫽��ѹ��ջ�� 
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
		for(it; it != str.end(); it++)   //ɾ���ո� 
		{
			if(*it == ' ')  str.erase(it);
		}
		while(!st.empty())  st.pop();   //��ʼ��ջ 
		Change();  //��׺���ʽ��ɺ�׺���ʽ 
		printf("%.2f\n", Cal());
	}
	return 0;
}
