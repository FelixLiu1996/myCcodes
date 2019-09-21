#include<cstdio>
bool hashtable[100010] = {0};
int main(){
	int n, m, a;
	scanf("%d%d", &n, &m);  //n为coin的种类，m为需要付的钱 
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a);
		hashtable[a]++;
	}
	for(int i = 1; i < m; i++)
	{
		if(hashtable[i] && hashtable[m - i])
		{
			if(i == m - i && hashtable[i] < 2)
			{
				continue;
			}
			printf("%d %d\n", i, m - i);
			return 0;
		}
	}
	printf("No Solution\n");
	return 0;
}
