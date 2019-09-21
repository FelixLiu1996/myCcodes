#include<stdio.h>             
//将P进制的数转换为Q进制的数分为两步 
int main(){                  //P进制下的x转换为10进制 
	int y = 0, product = 1;
	while (x != 0)
	{
		y = y + (x % 10) * product;
		x = x / 10;
		product = product * P;
	}
	
	int z[40], num = 0;
	do                       //将10进制的y转换为Q进制的z 
	{
		z[num++] = y % Q;
		y = y / Q;
	} while (y != 0)
	
}