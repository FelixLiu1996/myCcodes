#include<cstdio>
#include<cstring>
struct stu{
	char id[20];
	int hh, min, sec;
};
//这样太麻烦 
/*
bool compare(stu a, stu b)   //如果a的时间比b的时间大，则返回true 
{ 
	if(a.hh > b.hh)
	{
		return true;
	}
	else if(a.min > b.min)
	{
		return true;
	}
	else if(a.sec > b.sec)
	{
		return true;
	}
	else return false;
}*/
bool compare(stu a, stu b)
{
	if(a.hh != b.hh) return a.hh > b.hh;
	else if(a.min != b.min) return a.min > b.min;
	else return a.sec > b.sec;
}
int main(){
	int n; 
	scanf("%d", &n);
	stu ans_min, ans_max, temp;
	ans_min.hh = 24, ans_min.min = 60, ans_min.sec = 60;
	ans_max.hh = 0, ans_max.min = 0, ans_max.sec = 0;
	for(int i = 0; i < n; i++)
	{
		scanf("%s %d:%d:%d", &temp.id, &temp.hh, &temp.min, &temp.sec);
		if(compare(temp, ans_min) == false){
			ans_min = temp;
		}
		scanf("%d:%d:%d", &temp.hh, &temp.min, &temp.sec);
		if(compare(temp, ans_max) == true){
			ans_max = temp;
		}  
	}
	printf("%s %s\n", ans_min.id, ans_max.id);
	return 0;
}