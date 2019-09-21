#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
	int n;
	scanf("%d", &n);
	//A[i]存放i~i+1的距离,dis[i]存放顺时针1~i的距离 
	//如果不这样预处理 查询为10^4, N为10^5时,将运行超时 
	int dis[n + 1], A[n + 1];  
	int sum = 0;
	dis[0] = 0;
	for(int i = 1; i <= n; i++)
	{
		scanf("%d", &A[i]);
		sum += A[i];
		dis[i] = sum;
	}
	int m, start, end;
	scanf("%d", &m);
	for(int i = 0; i < m; i++)
	{
		scanf("%d%d", &start, &end);  //起点与终点 
		int temp = 0, ans;
		if(start > end) 
		{
			//swap(start, end);
			int change;
			change = start;
			start = end;
			end = change;
		}
		temp = dis[end - 1] - dis[start - 1];
		//这样做会超时 
		/*
		for(int i = start; i < end; i++)
		{
			temp += dis[i];
		}
		*/
		ans = min(temp, sum - temp);
		/*
		if(temp < sum - temp)
		{
			ans = temp;
		}
		else
		{
			ans = sum - temp;
		}
		*/
		printf("%d\n", ans);
	}
	return 0;
}
