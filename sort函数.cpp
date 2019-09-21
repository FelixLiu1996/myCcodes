#include<cstdio>
#include<algorithm>
using namespace std;
/*
int main()
{
	int a[6] = {9, 4, 2, 5, 6, -1};
	//将a[0]~a[3]进行排序
	sort(a, a + 4);
	for (int i = 0; i < 6; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	//将a[0]~a[5]进行排序
	sort(a, a + 6);
	for (int i = 0; i < 6; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}
*/
/*
int main(){
	double a[] = {1.4, -2.1, 9};
	sort(a, a + 3);
	for (int i = 0; i < 3; i++)
	{ 
		printf("%.1f ", a[i]);
	}
	return 0;
}
*/
/*
int main(){
	char c[] = {'T', 'W', 'A', 'K'};
	sort(c, c + 4);
	for (int i = 0; i < 4; i++)
	{
		printf("%c", c[i]);
	}
	return 0;
}
*/
/*
bool cmp(int a, int b){
	return a > b;
}
int main()
{
	int a[] = {3, 1, 4, 2};
	sort(a, a + 4, cmp);
	for (int i = 0; i < 4; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}
*/
//结构体的比较函数的书写 
/*
struct node{
	int x, y;
} ssd[10];
bool cmp(node a, node b)
{
	return a.x > b.x;
}
int main()
{
	ssd[0].x = 2;
	ssd[0].y = 2;
	ssd[1].x = 1;
	ssd[1].y = 3;
	ssd[2].x = 3;
	ssd[2].y = 1;
	sort(ssd, ssd + 3, cmp);
	for (int i  = 0; i < 3; i++)
	{
		printf("%d %d\n", ssd[i].x, ssd[i].y);
	}
	return 0;
}
*/




