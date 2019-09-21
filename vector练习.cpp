#include<cstdio>
#include<vector>
using namespace std;
/*
int main(){
	vector<int> vi;
	for(int i = 0; i <= 5; i++)
	{
		vi.push_back(i); //push.back(i) 在vi的末尾添加元素i 
	}
	vector<int>::iterator it = vi.begin();
	/*
	for(int i = 0; i <= 5; i++)
	{
		printf("%d ", *(vi.begin() + i));  
		//printf("%d ", *(it + i));  
		//printf("%d ", vi[i]);
	}
	*/
/*
	for(it; it != vi.end(); it++)
	{
		printf("%d ", *it);
	}
	return 0;
}
*/
/*
int main(){
	vector<int> vi;
	for(int i = 1; i <= 3; i++)
	{
		vi.push_back(i);
	}
	// 删除最后一个元素
	//vi.pop_back();
	// 在vi.begin() + 2 位置处加上-1这个元素 
	vi.insert(vi.begin() + 2, -1);
	for(int i = 0; i < vi.size(); i++)
	{
		printf("%d ", vi[i]);
	}
	//删除所有元素 
	//vi.clear();
	printf("%d\n", vi.size());
	return 0;
}
*/
/*
// erase 删除单个元素 
int main(){
	vector<int> vi;
	for(int i = 5; i <= 9; i++)
	{
		vi.push_back(i);
	}
	for(int i = 0; i < vi.size(); i++)
	{
		if(vi[i] == 8)
		{
			vi.erase(vi.begin() + i);
		}
	}
	for(int i = 0; i < vi.size(); i++)
	{
		printf("%d ", vi[i]);
	}
	printf("\n");
	printf("%d\n", vi.size());
	return 0;
}
*/
// erase(a, b) 删除一个区间[a, b)的元素  (区间左闭右开)
int main(){
	vector<int> vi;
	for(int i = 5; i <= 9; i++)
	{
		vi.push_back(i);
	}
	vi.erase(vi.begin() + 1, vi.begin() + 3);
	for(int i = 0; i < vi.size(); i++)
	{
		printf("%d ", vi[i]);
	}
	return 0;
} 