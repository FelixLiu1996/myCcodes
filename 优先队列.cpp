#include<cstdio>
#include<queue>
#include<string>
#include<iostream>
using namespace std;
/*
//元素的访问
int main(){
	priority_queue<int> q;
	for(int i = 1; i <= 5; i++)
	{
		q.push(i);
	}
	printf("%d\n", q.top()); //获得队首元素(堆顶元素) 
	q.pop();  //令堆顶元素出列 
	printf("%d\n", q.top());
	return 0;
}
*/
/*
//判空
int main(){
	priority_queue<int> q;
	if(q.empty() == true)
	{
		printf("Empty\n");
	}else{
		printf("Not Empty\n");
	}
	q.push(1);
	if(q.empty() == true)
	{
		printf("Empty\n");
	}else{
		printf("Not Empty\n");
	}
	return 0;	
} 
*/
/*
//元素个数
int main(){
	priority_queue<int> q;
	q.push(1);
	q.push(2);
	printf("%d\n", q.size());
	return 0;
}
*/
/*
//基本数据类型的优先级设置
int main(){
	priority_queue<int, vector<int>, greater<int> > q;
	for(int i = 1; i <= 5; i++)
	{
		q.push(i);
	}
	printf("%d\n", q.top());
	return 0;
} 
*/
//结构体变量的优先级设置
/*
struct fruit
{
	string name;
	int price;
	friend bool operator < (fruit f1, fruit f2)
	{
		return f1.price > f2.price;
	}
}f1, f2, f3;
int main(){
	priority_queue<fruit> q;
	f1.name = "桃子";
	f1.price = 3;
	f2.name = "梨子";
	f2.price = 4;
	f3.name = "苹果";
	f3.price = 1;
	q.push(f1);
	q.push(f2);
	q.push(f3);
	cout<<q.top().name<<" "<<q.top().price<<endl;
	return 0;
} 
*/
struct fruit{
	string name;
	int price;
}f1, f2, f3;
struct cmp{
	bool operator () (const fruit &f1, const fruit &f2)
	{
		return f1.price> f2.price;
	}
};
int main(){
	priority_queue<fruit, vector<fruit>, cmp> q;
	f1.name = "桃子";
	f1.price = 3;
	f2.name = "梨子";
	f2.price = 4;
	f3.name = "苹果";
	f3.price = 1;
	q.push(f1);
	q.push(f2);
	q.push(f3);
	cout<<q.top().name<<" "<<q.top().price<<endl;
	return 0;	
}
 