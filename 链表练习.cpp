#include<cstdio>
#include<cstdlib>
struct node{
	int data;
	node* next;
};
//创建链表 
node* create(int Array[])
{
	node* p, *pre, *head;  //pre保存当前节点的前驱节点，head为头结点 
	head = new node;  //创建头结点 
	head->next = NULL;
	pre = head;
	for(int i = 0; i < 5; i++)
	{
		p = new node;
		p->data = Array[i];
		p->next = NULL;
		pre->next = p;
		pre = p;
	}
	return head;
}
//删除链表 
void del(node* headp)
{
	node* nextp;
	while(headp != NULL)
	{
		nextp = headp->next;
		delete(headp);
		headp = nextp;
	}
}
void del(node* head, int x);
int search(node* p, int x);
void insert(node* head, int pos, int x);
int main(){
	int Array[5] = {5, 3, 6, 1, 2};
	node* head = create(Array);
	insert(head, 3, 4);
	del(head, 6);
	node* next;
	next = head->next;
	while(next != NULL)
	{
		printf("%d ", next->data);
		next = next->next;
	}
	
	//printf("\n");
	//printf("%d", search(head, 3));
	/*
	del(head);
	if(head != NULL)
	{
		printf("NO elements");
	}
	*/
	
	return 0;
}

//查找元素
//寻找链表中等于x 的个数 
int search(node* head, int x)
{
	int count = 0;
	node* p = head->next;  //从第一个节点开始
	while(p != NULL)
	{
		if(p->data == x)
		{
			count++;
		}
		p = p->next;
	}
	return count; 
}
//插入元素 
void insert(node* head, int pos, int x)
{
	node* p = head;
	for(int i = 0; i < pos - 1; i++) //到插入位置的前一个位置 
	{
		p = p->next;
	}
	node* q = new node; //新建节点 
	q->data = x;
	q->next = p->next;
	p->next = q;
}

void del(node* head, int x)
{
	node* p = head->next;
	node* pre = head;
	while(p != NULL)
	{
		if(p->data == x)
		{
			pre->next = p->next;
			delete(p);
			p = pre->next;
		}else{
			pre = p;
			p = p->next;
		}
	}
} 