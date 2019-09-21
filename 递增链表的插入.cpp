#include<cstdio>
#include<cstdlib>
//只解决了正常情况下的 输入问题 没解决边界输入问题 
struct node{
	int data;
	node* next;
};
node* create(int Array[], int N)
{
	node* head, *pre, *p;
	head = new node;
	head->next = NULL;
	pre = head;
	for(int i = 0; i < N; i++)
	{
		p = new node;
		p->data = Array[i];
		p->next = NULL;
		pre->next = p;
		pre = p;
	}
	return head;
	
}
void insert(node* head, int pos, int x)
{
	node* p = head;
	for(int i = 0; i < pos - 1; i++)
	{
		p = p->next;
	}
	node* q = new node;
	q->next = p->next;
	q->data = x;
	p->next = q;
}
int main(){
	
	
	int N, pos, x; //将x插入
	scanf("%d%d", &N, &x);
	int Array[N];
	for(int i = 0; i < N; i++)
	{
		scanf("%d", &Array[i]);
	}
	node* L = create(Array, N);
	L = L->next;
	int j;
	for(j = 1; j < N; j++)
	{
		if(x >= Array[j - 1] && x <= Array[j])
		{
			pos = j;
			break;
		}
	}
	if(j == N - 1){
		while(L != NULL)
		{
			
			printf("%d ", L->data);
		}

	}
	else
	{
		insert(L, pos, x);
		while(L != NULL)
		{
			printf("%d", L->data);
			if(L != NULL) printf(" ");
			L = L->next;
		}
	}
	return 0;
}
