#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	double pi = 0;
	double i = 1.0;
//	double res ;
	for (i; ; i++)
	{
		double res = 1.0 / (2.0*i - 1.0);
		pi = (pi + pow(-1.0,i-1.0) * res;
//		res = 1 / (2*i - 1);
		if (fabs(res) < pow(10.0, -6.0)) break; 	
	}
	printf("PI=%.8f", 4.0*pi);
	return 0;
} 
