#include<cstdio>
#include<vector>
using namespace std;
/*
int main(){
	vector<int> vi;
	for(int i = 0; i <= 5; i++)
	{
		vi.push_back(i); //push.back(i) ��vi��ĩβ���Ԫ��i 
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
	// ɾ�����һ��Ԫ��
	//vi.pop_back();
	// ��vi.begin() + 2 λ�ô�����-1���Ԫ�� 
	vi.insert(vi.begin() + 2, -1);
	for(int i = 0; i < vi.size(); i++)
	{
		printf("%d ", vi[i]);
	}
	//ɾ������Ԫ�� 
	//vi.clear();
	printf("%d\n", vi.size());
	return 0;
}
*/
/*
// erase ɾ������Ԫ�� 
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
// erase(a, b) ɾ��һ������[a, b)��Ԫ��  (��������ҿ�)
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