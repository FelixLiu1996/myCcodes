#include<cstdio>
//���Ԫ��
void clear(){
	front = rear = -1;
}
//��ȡԪ�ظ��� 
int size(){
	return rear - front;
}
//�п�
bool empty()
{
	if (front == rear) return true;
	else return false;
} 
//��� 
void push(int x)
{
	q[++rear] = x;
}
//����
void pop()
{
	front++;
}
//ȡ����Ԫ��
int get_front()
{
	return q[front + 1];
} 
//ȡ��βԪ��
int get_rear(){
	return q[rear];
} 
