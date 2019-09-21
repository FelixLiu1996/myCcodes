#include<cstdio>
//清空元素
void clear(){
	front = rear = -1;
}
//获取元素个数 
int size(){
	return rear - front;
}
//判空
bool empty()
{
	if (front == rear) return true;
	else return false;
} 
//入队 
void push(int x)
{
	q[++rear] = x;
}
//出队
void pop()
{
	front++;
}
//取队首元素
int get_front()
{
	return q[front + 1];
} 
//取队尾元素
int get_rear(){
	return q[rear];
} 
