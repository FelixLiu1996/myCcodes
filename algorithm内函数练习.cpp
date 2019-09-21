#include<cstdio>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<iostream>
using namespace std;
/*
int main(){
	int x = 1, y = -2;
	double a = 3.14, b = -3.14;
	//printf("%d %d\n", max(x, y), min(x, y));
	//printf("%lf %d\n", fabs(a), abs(y));
	swap(x, y);
	printf("%d %d\n", x, y);
	return 0;
}
*/
/*
int main(){
	int a[10];
	for(int i = 0; i < 6; i++)
	{
		a[i] = i + 10;
	}
	reverse(a, a + 4);
	for(int i = 0; i < 6; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}
*/
//¶Ôstring½øÐÐ·´×ª 
/*
int main(){
	string str = "abcdefghi";
	reverse(str.begin() + 2, str.begin() + 6);
	for(int i = 0; i < str.length(); i++)
	{
		printf("%c ", str[i]);
	}
	return 0;
}
*/
//next_permutation º¯Êý 
/*
int main(){
	int a[10] = {1, 2, 3};
	do{
		printf("%d%d%d\n", a[0], a[1], a[2]);
	}while(next_permutation(a, a + 3));
	return 0;
}
*/
//fill()º¯Êý
/*
int main(){
	int a[5] = {1, 2, 3, 4, 5};
	fill(a, a + 2, 233);
	for(int i = 0; i < 5; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}
*/
//sort º¯Êý ÈÝÆ÷µÄÅÅÐò 
/* 
bool cmp(int a, int b){
 	return a > b;
}
int main(){
 	vector<int> vi;
 	vi.push_back(3);
 	vi.push_back(1);
 	vi.push_back(2);
 	sort(vi.begin(), vi.end(), cmp);
 	for(int i = 0; i < vi.size(); i++)
 	{
	 	printf("%d ", vi[i]);
	 }
	 return 0;
}
*/
//°´×ÖµäÐòÅÅÐò 
/*
int main(){
	string str[3] = {"bbbb", "cc", "aaa"};
	sort(str, str + 3);
	for(int i = 0; i < 3; i++)
	{
		cout<<str[i]<<endl;
	}
	return 0;
}
*/
//°´×Ö·û³¤¶ÌÅÅÐò´ÓÐ¡µ½´óÅÅÐò 
/*
bool cmp(string a, string b)
{
	return a.length() < b.length();
} 
int main(){
	string str[3] = {"bbbb", "cc", "aaa"};
	sort(str, str + 3, cmp);
	for(int i = 0; i < 3; i++)
	{
		cout<<str[i]<<endl;
	}
	return 0;
}
*/
int main(){
	int a[10] = {1, 2, 2, 3, 3, 3, 5, 5, 5, 5};
	//Ñ°ÕÒ-1
	int* lowerPos = lower_bound(a, a + 10, -1);
	int* upperPos = upper_bound(a, a + 10, -1);
	printf("%d %d\n", lowerPos - a, upperPos - a);
	//ÕÒ1 
	lowerPos = lower_bound(a, a + 10, 1);
	upperPos = upper_bound(a, a + 10, 1);
	printf("%d %d\n", lowerPos - a, upperPos - a);
	//ÕÒ3
	lowerPos = lower_bound(a, a + 10, 3);
	upperPos = upper_bound(a, a + 10, 3);
	printf("%d %d\n", lowerPos - a, upperPos - a);	 
	//ÕÒ4
	lowerPos = lower_bound(a, a + 10, 4);
	upperPos = upper_bound(a, a + 10, 4);
	printf("%d %d\n", lowerPos - a, upperPos - a); 
	//ÕÒ6
	lowerPos = lower_bound(a, a + 10, 6);
	upperPos = upper_bound(a, a + 10, 6);
	printf("%d %d\n", lowerPos - a, upperPos - a); 	 	
	return 0; 
}
