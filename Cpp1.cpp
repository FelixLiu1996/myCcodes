#include <iostream.h>
#include <math.h>
void main()
{
/*	int i, n;
	float t;
	cout<<"type in a number"<<endl;
	cin>>n;
	for( i = 1, t = 1.0 ;i <= n ;i++ )
	{
		t = t*i;
	}
	cout<<t<<endl;
*/
/*	int i,j,k;
	int sum;
	for (i = 1, sum = 0; i<=9;i++)
	{
		for (j = 0; j<=9; j++)
		{
			for (k = 0; k<=9;k++)
			{
				if (i != j && j != k && k != i && k %2 != 0)
				sum = sum+1;
			}
		}


	}
	cout<<sum<<endl;
*/
/*	int i,j,n;
	cout<<"type a number"<<endl;
	cin>>n;
	for(i = 2, j = (int)sqrt(n); i <= j; i++)
	{
		if (n % i ==0) 
			break;
		if (i >j)
			cout<<n<<" it is a sushu"<<endl;
		else
			cout<<n<<" it is not a sushu"<<endl;
		
	}
*/
/*	int n,i,j,k;
	int count = 0;
	for (n = 100; n <= 1000; n++)
	{
		i = n/100;
		j = (n - i*100)/10;
		k = n - i*100 - j*10;
		if(i+j+k == 5)
		{
			count = count +1;
			cout<<n<<" ";
			if (count %5 ==0)
			{
				cout<<'\n';
			}
		}
	}
*/
/*
	int count=0; 
	int n, m, l; 
	for (n=0; n<=10; n++)
	{
		for (m=0; m<=5;m++)
		{
			for (l=0; l<=2; l++)
			{
				if (n+2*m+5*l == 10)
				{
					count++;
					cout<<"һë����"<<n<<"��"<<" ";
					cout<<"��ë����"<<m<<"��"<<" ";
					cout<<"��ë����"<<l<<"��"<<" "<<endl;
				}
			}
		}
	}
	cout<<"�ܹ���"<<count<<"�����"<<endl;
*/
/*
	int n;
	cout<<"type a number"<<endl;
	cin>>n;
	if (n % 3 == 0 && n % 5 ==0 && n % 7 == 0)
	{
		cout<<n<<"�ܱ�3��5��7����"<<endl;
	} 
	else if (n % 3 ==0 && n % 5 == 0 && n % 7 != 0)
		cout<<n<<"�ܱ�3��5����"<<endl;
	else if (n % 3 == 0 && n % 7 == 0 && n % 5 != 0)
		cout<<n<<"�ܱ�3��7����"<<endl;
	else if (n % 5 == 0 && n % 7 == 0 && n % 3 != 0)
		cout<<n<<"�ܱ�5��7����"<<endl;
	else if (n % 3 == 0 && n % 5 != 0 && n % 7 !=0)
		cout<<n<<"�ܱ�3����"<<endl;
	else if (n % 5 == 0 && n % 3 != 0 && n % 7 !=0)
		cout<<n<<"�ܱ�5����"<<endl;
	else if (n % 7 == 0 && n % 5 != 0 && n % 3 !=0)
		cout<<n<<"�ܱ�7����"<<endl;
	else 
		cout<<n<<"���ܱ�3��5��7����"<<endl;
*/
/*
  int sum = 0;
  int i = 1;
  int n = 100;
  sum  = ((i+n)*n)/2;
  cout<<sum<<endl;
 */
/*	int i;
	int sum = 1;
	for (i = 1; i <= 9; i++)
	{
		sum = (sum+1)*2;
	}
	cout<<sum<<endl;
*/
	int score;
	char grade;
	cout<<"������һ���ɼ�"<<endl;
	cin>>score;
	if (score > 100 || score < 0)
	{
		cout<<"An error score"<<endl;
	}
	else 
	{	int num  = (score - score%10)/10;
		switch (num)
		{
		case 10 : 
		case 9 : grade = 'A'; break;
		case 8 : grade = 'B'; break;
		case 7 : grade = 'C'; break;
		case 6 : grade = 'D'; break;
		case 5 :
		default : grade = 'E'; break;
		}
	cout<<score<<"is a "<<grade<<endl;
	}

















}































