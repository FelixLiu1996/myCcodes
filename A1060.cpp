#include<iostream>
#include<string>
using namespace std;
int n;  //ȫ�ֱ���  ������deal�������õ���ʾ��λ�� 
string deal(string str, int &e)
{
	int k = 0;  //��¼�±� 
	//ȥ��ǰ����㣬������������û������ 
	while(str.length() > 0 && *str.begin() == '0')  
	{
		str.erase(str.begin());
	}
	if(*str.begin() == '.') //˵��������С�� 
	{
		str.erase(str.begin());
		while(str.length() > 0 && *str.begin() == '0') //ȥ��С��������0 
		{
			str.erase(str.begin());
			e--;
		}
	}
	else{     //���ֲ���С�������  ������  ����û��С����  xxx.xx ��xxx 
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
	if(str.length() == 0)  //˵��������0  ���ܷŵ�ǰ�� ��Ϊ���ܻ���� 3 000 000.00 ���ȴ�����  
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