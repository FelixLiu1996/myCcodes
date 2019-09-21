#include<cstdio>
//清空操作
void clear(){
	TOP = -1;
} 
//栈元素个数
int size(){
	return TOP + 1;
} 
//判空
bool empty(){
	if(TOP == -1) return true;
	else return false;
} 
//进栈
void push(int x)
{
	st[++TOP] = x;
}
//出栈 
void pop(){
	TOP--;
}
//取栈顶元素 
int top(){
	return st[TOP];
}
