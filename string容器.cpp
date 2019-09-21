#include<cstdio>
#include<iostream>
#include<string>
using namespace std;
/*
int main(){
	string str = "abcd";
	
	for(int i = 0; i < str.length(); i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
	//cout<<str;
	//使用c_str()将str转化为字符数组使用printf输出
	printf("%s\n", str.c_str()); 
	return 0;
}
*/
/* 通过迭代器访问元素 
int main(){
	string str = "abcd";
	for(string::iterator it = str.begin(); it != str.end(); it++)
	{
		printf("%c", *it);
	}
	return 0;
}
*/
//  += 可以直接拼接两个string 
/*
int main(){
	string str1 = "abc", str2 = "xyz", str3;
	str3 = str1 + str2;
	str1 += str2;
	cout<<str1<<endl;
	cout<<str3<<endl;
}
*/
/*
int main(){
	string str1 = "aa", str2 = "aaa", str3 = "abc", str4 = "xyz";
	if(str1 < str2) printf("ok1\n");
	if(str1 != str3) printf("ok2\n");
	if(str4 >= str3) printf("ok3\n");
	return 0;
}
*/
/*
int main(){
	string str = "abcxyz", str2 = "opq";
	str.insert(3, "opq");
	cout<<str<<endl;
	str.insert(str.begin() + 3, str2.begin(), str2.end());
	cout<<str<<endl;
	return 0;
}
*/
/*
int main(){
	string str = "abcdefg";
	str.erase(str.begin() + 4);
	cout<<str<<endl;
	return 0;
}
*/
/*
int main(){
	string str = "abcdefg";
	//str.erase(str.begin() + 2, str.end() - 1);
	str.erase(2, 4);
	cout<<str<<endl;
	return 0;
}
*/
/*
int main(){
	string str = "Thank you for your smile.";
	cout<<str.substr(0, 5)<<endl;
	cout<<str.substr(14, 4)<<endl;
	cout<<str.substr(19, 5)<<endl;
	return 0;
}
*/
/*
int main(){
	if(string::npos == -1)
	{
		cout<<"-1 is true"<<endl;
	}
	if(string::npos == 4294967295)
	{
		cout<<"also is true"<<endl;
	}
	return 0;
}
*/
/*  find()的用法 
int main(){
	string str = "Thank you for your smile.";
	string str2 = "you", str3 = "me";
	if(str.find(str2) != string::npos)
	{
		cout<<str.find(str2)<<endl;
	}
	if(str.find(str2, 7) != string::npos)
	{
		cout<<str.find(str2, 7)<<endl;
	}
	if(str.find(str3) != string::npos)
	{
		cout<<str.find(str3)<<endl;
	}else{
		cout<<"I know there is no position for me"<<endl;
	}
	return 0;
}
*/
/*
int main(){
	string str = "Maybe you will turn around.";
	string str2 = "will not";
	string str3 = "surely";
	cout<<str.replace(10, 4, str2)<<endl;
	cout<<str.replace(str.begin(), str.begin() + 5, str3)<<endl;
	return 0;
}
*/
/*
int main(){
	string str = "012";
	if(*str.begin() == '0')
	{
		cout<<"yes";
	}
	return 0;
}
*/

int main(){
	string str1 = "abc";
	string str2[2] = {"ab", "cd"};
	printf("%d %d", str1.size(), str2[1].size());
	return 0;
}