#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
//bool hashTable[128] = {false};  //���ַ��Ƿ���s2�г��� 
//char str1[10010], str2[10010];
int main(){
	char str1[10010], str2[10010];
	bool HashTable[128] = {false};  //���ַ��Ƿ���s2�г��� 
	cin.getline(str1,10010);
	cin.getline(str2, 10010);
	//gets(str1);
	//gets(str2);
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	/*
	for(int i = 0; i < len1; i++)  //��str1�г��ֵ��ַ� 
	{
		hashTable[str1[i]] = true;
	}
	for(int i = 0; i < len2; i++)  
	{
		hashTable[str2[i]] = false;
	}
	for(int i = 0; i < len1; i++)
	{
		if(hashTable[str1[i]] == true)
		{
			printf("%c", str1[i]);
		}
	}
	*/
	for(int i = 0; i < len2; i++)
	{
		HashTable[str2[i]] = true;
	}
	for(int i = 0; i < len1; i++)
	{
		if(HashTable[str1[i]] == false)
		{
			printf("%c", str1[i]);
		}
	}
	return 0;
}
