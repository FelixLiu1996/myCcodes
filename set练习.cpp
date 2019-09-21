#include<cstdio>
#include<set>
using namespace std;
/*
int main(){
	set<int> st;
	st.insert(3);
	st.insert(5);
	st.insert(2);
	st.insert(3);
	for(set<int>::iterator it = st.begin(); it != st.end(); it++)
	{
		printf("%d ", *it);
	}
	return 0;
}
*/
/*
int main(){
	set<int> st;
	for(int i = 1; i <= 3; i++)
	{
		st.insert(i);
	}
	//printf("%d\n", *st.find(2));
	set<int>::iterator it = st.find(2);
	printf("%d ", *it);
	return 0;
}
*/
/*
int main(){
	set<int> st;
	st.insert(100);
	st.insert(200);
	st.insert(300);
	st.insert(100);
	//通过迭代器删除元素 
	//st.erase(st.find(100));
	//st.erase(st.find(300));
	//通过值删除对应值元素
	st.erase(100); 
	for(set<int>::iterator it = st.begin(); it != st.end(); it++)
	{
		printf("%d ", *it);
	}
	return 0;
}
*/
/*
int main(){
	set<int> st;
	for(int i = 10; i <= 40; i += 10)
	{
		st.insert(i);
	}
	set<int>::iterator it = st.find(30);
	//erase(a, b) 删除起始迭代器a，以及b迭代器的下一个地址 
	st.erase(it, st.end());
	for(it  = st.begin(); it != st.end(); it++)
	{
		printf("%d ", *it);
	}
	return 0;
}
*/
/*
int main(){
	set<int> st;
	for(int i = 1; i <= 3; i++)
	{
		st.insert(i);
	}
	//删除所有元素

	printf("%d\n", st.size());
}
*/
/*
//改变set的顺序 
struct cmp{
	bool operator () (int a, int b)
	{
		return a > b;
	}
};
int main(){
	set<int, cmp> st;
	for (int i = 1; i <= 3; i++)
	{
		st.insert(i);
	}
	set<int>::iterator it;
	for(it = st.begin(); it != st.end(); it++)
	{
		printf("%d ", *it);
	}
	return 0;
}
*/
