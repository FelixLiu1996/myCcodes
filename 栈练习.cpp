#include<cstdio>
//��ղ���
void clear(){
	TOP = -1;
} 
//ջԪ�ظ���
int size(){
	return TOP + 1;
} 
//�п�
bool empty(){
	if(TOP == -1) return true;
	else return false;
} 
//��ջ
void push(int x)
{
	st[++TOP] = x;
}
//��ջ 
void pop(){
	TOP--;
}
//ȡջ��Ԫ�� 
int top(){
	return st[TOP];
}
