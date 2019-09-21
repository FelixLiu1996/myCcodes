#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
const int maxn = 1010;
int toll[25];
struct record{
	char name[25];
	int month, dd, hh, mm;
	bool status; // true 表示on-line false表示off-line 
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
	int n;  //记录数 
	scanf("%d", &n);
	char line[10];  //临时存放on-line, off-line
	for(int i = 0; i < n; i++)
	{
		scanf("%s", rec[i].name);
		scanf("%d:%d:%d:%d", &rec[i].month, &rec[i].dd, &rec[i].hh, &rec[i].mm);
		scanf("%s", line);
		if(strcmp(line, "on-line") == 0)
		{
			rec[i].status = true;  //是on-line 就是true 
		}else{
			rec[i].status = false;
		} 
	}
	sort(rec, rec + n, cmp);
	int on = 0, off, next; //on, off 为配对的记录， next为下一个用户
	while(on < n)
	{
		int needprint = 0;  //needprint表示该用户是否需要输出
		next = on;  //从当前位置开始寻找下一个用户
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
			next++;  //一直自增直到找到下一个用户 
		}
		if(needprint < 2)  //没有找到配对的on-off 
		{
			on = next;
			continue;
		}
		int allmoney = 0;
		printf("%s %02d\n", rec[on].name, rec[off].month);
		while(on < next)  //寻找该用户的所有匹配 
		{
			while(on < next - 1 
			&& rec[on].status == true && rec[on + 1].status == false)
			{
				
			}
		} 
	} 
}
