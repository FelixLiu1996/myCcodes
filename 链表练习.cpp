#include<cstdio>
#include<cstdlib>
struct node{
	int data;
	node* next;
};
//�������� 
node* create(int Array[])
{
	node* p, *pre, *head;  //pre���浱ǰ�ڵ��ǰ���ڵ㣬headΪͷ��� 
	head = new node;  //����ͷ��� 
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
//ɾ������ 
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

//����Ԫ��
//Ѱ�������е���x �ĸ��� 
int search(node* head, int x)
{
	int count = 0;
	node* p = head->next;  //�ӵ�һ���ڵ㿪ʼ
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
//����Ԫ�� 
void insert(node* head, int pos, int x)
{
	node* p = head;
	for(int i = 0; i < pos - 1; i++) //������λ�õ�ǰһ��λ�� 
	{
		p = p->next;
	}
	node* q = new node; //�½��ڵ� 
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