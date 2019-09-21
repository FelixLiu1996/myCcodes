#include <iostream>
using namespace std;
/*
class a
{
	int x;
public:
	void initial(int y)
	{
		x = y;
	}
	void print()
	{
		cout<<x<<'\t';
	}
};
a s;
void main()
{
	s.initial(5);
	s.print();
	a temp;
	temp.initial(12);
	temp.print();
	cout<<endl;
}
*/
/*
class Box
{
public:
	void setparameter(int l, int w, int d)
	{
		length = l;
		width = w;
		depth = d;
	}
	int Volume()
	{
		return length * width * depth;
	}
	void dispinfo()
	{
		cout<<"Box³¤£º"<<length<<"Box¿í£º"<<width<<"Box¸ß£º"<<depth<<endl;
	}
private:
	int length, width, depth;
};
*/
class TableClass
{
private:
	int i, j;
public:
	int add() {return i + j};
	int dec() {return i - j};
	int getnum();
};
inline int TableClass ::getnum()
{
	return i;
}
void main()
{
	
}




























