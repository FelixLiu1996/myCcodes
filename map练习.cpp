#include<cstdio>
#include<map>
#include<cstring>
#include<string>
using namespace std;
/*
int main(){
	map<char, int> mp;
	mp['c'] = 20;
	mp['c'] = 30;
	printf("%d\n", mp['c']);
	return 0;
}
*/
/*
int main(){
	map<char, int> mp;
	mp['m'] = 20;
	mp['r'] = 30;
	mp['a'] = 40;
	for(map<char, int>::iterator it = mp.begin(); it != mp.end(); it++)
	{
		printf("%c %d\n", it -> first, it -> second);
	}
}
/*
int main(){
	map<char, int> mp;
	mp['a'] = 1;
	mp['b'] = 2;
	mp['c'] = 3;
	map<char, int>::iterator it = mp.find('b');
	//ɾ������Ԫ�� 
	//mp.erase(it);
	//mp.erase('b');
	//ɾ��һ�������ڵ�Ԫ�� 
	//mp.erase(it, mp.end());
	for(it = mp.begin(); it != mp.end(); it++)
	{
		printf("%c %d\n", it -> first, it -> second);
	}
	// ���map��ӳ��Ķ��� 
	//printf("%d\n", mp.size());
	//printf("%c %d\n", it -> first, it -> second);
	return 0;
}
*/
//���ҿ��Ǹ�Ԫ���������г��� 
/*
int main(){
	map<char, int> mp;
	for(char i = 'a'; i <= 'z'; i++)
	{
		mp[i] = 0;
	}
	char str[20] = {"abc"};
	for(int i = 0; i < strlen(str); i++)
	{
		mp[str[i]] = 1;
	}
	for(map<char, int>::iterator it = mp.begin(); it != mp.end(); it++)
	{
		if(it -> second != 0)
		{
			printf("%c\n", it -> first);
		}
	}
	/*
	for(map<char, int>::iterator it = mp.begin(); it != mp.end(); it++)
	{
		printf("%c %d\n", it -> first, it -> second);
	}
	*/
	//return 0;
//}

int main(){
	map<string, int> mp;
	mp["m"] = 20;
	mp["r"] = 30;
	mp["a"] = 40;
	
	printf("%d\n", mp.find("m") -> second);
	return 0;	
}