#include<cstdio>
const int maxn = 11;
int n, P[maxn], hashTable[maxn] = {false};
// ��ǰ�������еĵ�indexλ
void generateP(int index)
{
	if (index == n + 1)            //  �ݹ�߽磬 ����������� 
	{
		for (int i = 1; i <= n; i++)
		{
			printf("%d", P[i]);
		}
		printf("\n");
		return;
	}
	for (int x = 1; x <= n; x++)    //ö��1~n����ͼ��xд��P[index] 
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
	generateP(1);  //��P[1]��ʼ�� 
	return 0;
}