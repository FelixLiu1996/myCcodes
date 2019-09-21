#include<cstdio>
const int maxn = 11;
int n, P[maxn], hashTable[maxn] = {false};
// 当前处理排列的第index位
void generateP(int index)
{
	if (index == n + 1)            //  递归边界， 超出输出排列 
	{
		for (int i = 1; i <= n; i++)
		{
			printf("%d", P[i]);
		}
		printf("\n");
		return;
	}
	for (int x = 1; x <= n; x++)    //枚举1~n，试图将x写入P[index] 
	{
		if (hashTable[x] == false)
		{
			P[index] = x;
			hashTable[x] = true;
			generateP(index + 1);
			hashTable[x] = false;
		}
	}
} 
int main(){
	n = 3;
	generateP(1);  //从P[1]开始填 
	return 0;
}