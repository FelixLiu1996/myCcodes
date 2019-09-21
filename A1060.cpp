#include<iostream>
#include<string>
using namespace std;
int n;  //全局变量  方便在deal函数里用到显示的位数 
string deal(string str, int &e)
{
	int k = 0;  //记录下标 
	//去掉前面的零，看整数部分有没有数字 
	while(str.length() > 0 && *str.begin() == '0')  
	{
		str.erase(str.begin());
	}
	if(*str.begin() == '.') //说明数字是小数 
	{
		str.erase(str.begin());
		while(str.length() > 0 && *str.begin() == '0') //去掉小数点后面的0 
		{
			str.erase(str.begin());
			e--;
		}
	}
	else{     //数字不是小数的情况  分两种  看有没有小数点  xxx.xx 或xxx 
		while(k < str.length() && str[k] != '.')
		{
			e++;
			k++;
		}
		if(k < str.length())
		{
			str.erase(str.begin() + k);
		}
	}
	if(str.length() == 0)  //说明数字是0  不能放到前面 因为可能会出现 3 000 000.00 结果却不相等  
	{
		e = 0;
	}
	int num = 0;
	k = 0;
	string res;
	while(num < n)
	{
		if(k < str.length()) res += str[k++];
		else res += '0';
		num++;
	}
	return res; 
}

int main(){
	string str1, str2, res1, res2;
	cin>> n >> str1 >> str2;
	int e1 = 0, e2 = 0;
	res1 = deal(str1, e1);
	res2 = deal(str2, e2);
	if(res1 == res2 && e1 == e2)
	{
		cout<<"YES "<<"0."<<res1<<"*10^"<<e1<<endl;
	}
	else{
		cout<<"NO "<<"0."<<res1<<"*10^"<<e1<<" 0."<<res2<<"*10^"<<e2<<endl;
	}
	return 0;
}