#include<cstdio>
#include<iostream>
#include<map>
#include<utility>
#include<string>
using namespace std;
//访问pair里的元素 
/*
int main(){
	pair<string, int> p;
	p.first = "haha";
	p.second = 5;
	cout<<p.first<<" "<<p.second<<endl;
	p = make_pair("xixi", 55);
	cout<<p.first<<" "<<p.second<<endl;
	p = pair<string, int>("hehe", 555); 
	cout<<p.first<<" "<<p.second<<endl;
	return 0;
}
*/
/*
int main(){
	pair<int, int> p1(5, 10);
	pair<int, int> p2(5, 15);
	pair<int, int> p3(10, 5);
	if(p1 < p3) printf("p1 < p3\n");
	if(p1 < p2) printf("p1 < p2\n");
	return 0;
}
*/
//作为map的键值对来进行插入 
int main(){
	map<string, int> mp;
	mp.insert(make_pair("haha", 5));
	mp.insert(pair<string, int>("hehe", 55));
	for(map<string, int>::iterator it = mp.begin(); it != mp.end(); it++)
	{
		cout<<it -> first<<" "<<it -> second<<endl;
	}
	return 0;
}
