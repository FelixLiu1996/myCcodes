#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
const int maxn = 1010;
int toll[25];
struct record{
	char name[25];
	int month, dd, hh, mm;
	bool status; // true ��ʾon-line false��ʾoff-line 
}rec[maxn], temp;
bool cmp(record a, record b)
{
	int s = strcmp(a.name, b.name);
	if(s != 0) return s < 0;
	else if(a.month != b.month) return a.month < b.month;
	else if (a.dd != b.dd) return a.dd < b.dd;
	else if (a.hh != b.hh) return a.hh < b.hh;
	else return a.mm < b.mm;
}
int main(){
	for(int i = 0; i < 24; i++)
	{
		scanf("%d", &toll[i]);
	}
	int n;  //��¼�� 
	scanf("%d", &n);
	char line[10];  //��ʱ���on-line, off-line
	for(int i = 0; i < n; i++)
	{
		scanf("%s", rec[i].name);
		scanf("%d:%d:%d:%d", &rec[i].month, &rec[i].dd, &rec[i].hh, &rec[i].mm);
		scanf("%s", line);
		if(strcmp(line, "on-line") == 0)
		{
			rec[i].status = true;  //��on-line ����true 
		}else{
			rec[i].status = false;
		} 
	}
	sort(rec, rec + n, cmp);
	int on = 0, off, next; //on, off Ϊ��Եļ�¼�� nextΪ��һ���û�
	while(on < n)
	{
		int needprint = 0;  //needprint��ʾ���û��Ƿ���Ҫ���
		next = on;  //�ӵ�ǰλ�ÿ�ʼѰ����һ���û�
		while(next < n && strcmp(rec[next].name, rec[on].name) == 0) 
		{
			if(needprint == 0 && strcmp(rec[next].status == true))
			{
				needprint = 1;
			}
			else if(needprint == 1 && strcmp(rec[next].status == false))
			{
				needprint = 2;
			}
			next++;  //һֱ����ֱ���ҵ���һ���û� 
		}
		if(needprint < 2)  //û���ҵ���Ե�on-off 
		{
			on = next;
			continue;
		}
		int allmoney = 0;
		printf("%s %02d\n", rec[on].name, rec[off].month);
		while(on < next)  //Ѱ�Ҹ��û�������ƥ�� 
		{
			while(on < next - 1 
			&& rec[on].status == true && rec[on + 1].status == false)
			{
				
			}
		} 
	} 
}
