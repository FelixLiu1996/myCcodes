#include<cstdio>
const int maxn = 100010;
//暴力法   算法复杂度O(n^3) 
int Maxseqsum1(int List[], int n)
{
	int thissum, Maxsum = 0;
	for(int i = 0; i < n; i++)
	{
		for(int j = i; j < n; j++)
		{
			thissum = 0;
			for(int k = i; k <= j; k++)
			{
				thissum += List[k];
			}
			if(thissum > Maxsum)
			{
				Maxsum = thissum;
			}
			else{
				thissum = 0;
			}
		}
	}
	return Maxsum;
}
// 稍微改良的一个算法 算法复杂度O(n^2) 
int Maxseqsum2(int List[], int n)
{
	int thissum, Maxsum = 0;
	for(int i = 0; i < n; i++)
	{
		thissum = 0;
		for(int j = i; j < n; j++)
		{
			thissum += List[j];
			if(thissum > Maxsum)
			{
				Maxsum = thissum;
			}
		}
	}
	return Maxsum;
}

//分而治之 分治法 
int Max3(int A, int B, int C){
	return A > B? A > C ? A : C : B > C? B : C;
}
int DivideandConquer(int List[], int left, int right)
{
	int Maxleftsum , Maxrightsum;  //存放左右问题的解 
	int Maxleftbordersum, Maxrightbordersum; // 存放跨越边界的解 
	int leftbordersum, rightbordersum;
	int center, i; 
	if(left == right)  //递归的终止条件 
	{
		if(List[left] > 0) return List[left];
		else return 0;
	}
	
	center = (left + right) / 2;
	Maxleftsum = DivideandConquer(List, left, center);  
	Maxrightsum = DivideandConquer(List, center + 1, right);
	
	//跨越边界的最大子列和
	Maxleftbordersum = 0;
	leftbordersum = 0;
	for(i = center; i >= left; i--)  //  从中线向左扫描 
	{
		leftbordersum += List[i];
		if(leftbordersum > Maxleftbordersum)
		{
			Maxleftbordersum = leftbordersum;
		}
	}

	rightbordersum = 0;
	Maxrightbordersum = 0;	
	for(i = center + 1; i <= right; i++)  //从中线向右扫描 
	{
		rightbordersum += List[i];
		if(rightbordersum > Maxrightbordersum)
		{
			Maxrightbordersum = rightbordersum;
		}	
	}
	return Max3(Maxrightsum, Maxleftsum, Maxrightbordersum + Maxleftbordersum); 
}

int Maxseqsum3(int List[], int n)
{
	return DivideandConquer(List, 0, n - 1);
}

//在线处理方法 

int Maxseqsum4(int List[], int n)
{
	int thissum = 0, Maxsum = 0;
	for(int i = 0; i < n; i++)
	{
		thissum += List[i];
		if(thissum > Maxsum)
		{
			Maxsum = thissum;
		}
		else if(thissum < 0)
		{
			thissum = 0;
		}
	}
	return Maxsum;
}

int main(){
	int List[maxn], n, j;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &List[i]);
	}
	for(j = 0; j < n; j++)
	{
		if(List[j] >= 0)  break;
	}
	if(j == n - 1)  printf("0");
	else{
		printf("%d\n", Maxseqsum1(List, n));
	}
	//printf("%d\n", Maxseqsum1(List, n));
	//printf("%d\n", Maxseqsum2(List, n));
	//printf("%d\n", Maxseqsum3(List, n));
	//printf("%d\n", Maxseqsum4(List, n));
	return 0;
}