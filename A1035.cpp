#include<cstdio>
#include<cstring>
const int maxn = 1010;
struct stu{
	char name[20], password[20];
	bool ischange = false;
}test[maxn];

void check(stu& a, int& count)   //看是否需要修改，修改count 变量+1 
{
	int len = strlen(a.password);
	for(int i = 0; i < len; i++)
	{
		if(a.password[i] == '1')
		{
			a.password[i] = '@';
			a.ischange = true;
		}
		else if(a.password[i] == '0')
		{
			a.password[i] = '%';
			a.ischange = true;
		}
		else if(a.password[i] == 'l')
		{
			a.password[i] = 'L';
			a.ischange = true;
		}
		else if(a.password[i] == 'O')
		{
			a.password[i] = 'o';
			a.ischange = true;
		}
	}
	if(a.ischange)
	{
		count++;
	}
}

int main(){
	int n;
	scanf("%d", &n); 
	int count = 0;  //记录修改的个数 
	for(int i = 0; i < n; i++)
	{
		scanf("%s %s", &test[i].name, &test[i].password);
		check(test[i], count);
	}
	if(count != 0)  //说明修改了数据 
	{
		printf("%d\n", count);
		for(int i = 0; i < n; i++)
		{
			if(test[i].ischange){
				printf("%s %s\n", test[i].name, test[i].password);
			}
		}
	}
	else{
		if(n == 1) printf("There is %d account and no account is modified\n", n);
		else{
			printf("There are %d accounts and no account is modified", n);
		}
	}
	return 0;
}

