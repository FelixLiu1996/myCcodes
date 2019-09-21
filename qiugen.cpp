#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a, b ,c, r1, r2;
	cin>>a>>b>>c;
	double del = b*b - 4*a*c;
	if (a == 0)
	{
		cout<<"a cannot be zero"<<endl;
	}
	if (a != 0)
	{
		if (del > 0)
		{
			r1 = (-b+sqrt(del))	/(2*a);
			r2 = (-b-sqrt(del))	/(2*a);
			cout<<"r1="<<r1<<'\n'<<"r2="<<r2<<endl;
		}
		if (del == 0)
		{
			r1 = r2 = -b / (2*a);
			cout<<"r1="<<r1<<'\n'<<"r2="<<r2<<endl;
		}
		else
		{
			cout<<"No real roots!"<<endl;
		}
	}
}
