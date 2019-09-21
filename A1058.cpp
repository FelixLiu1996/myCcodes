#include<cstdio>
/*   //方法一 
const int Gallon = 17;
const int Sickle = 29;
int main(){
	int Gallon_A, Sickle_A, Knut_A, Gallon_B, Sickle_B, Knut_B;
	int Gallon_sum, Sickle_sum, Knut_sum;
	scanf("%d.%d.%d%d.%d.%d", &Gallon_A, &Sickle_A, &Knut_A, 
	&Gallon_B, &Sickle_B, &Knut_B);
	Gallon_sum = Gallon_A + Gallon_B;
	Sickle_sum = Sickle_A + Sickle_B;
	Knut_sum = Knut_A + Knut_B;
	if (Knut_sum >= Sickle)
	{
		Sickle_sum += 1;
		Knut_sum = Knut_sum - Sickle;
		if (Sickle_sum >= Gallon)
		{
			Gallon_sum += 1;
			Sickle_sum -= Gallon;
		}
	}
	if (Sickle_sum >= Gallon)
	{
		Gallon_sum += 1;
		Sickle_sum -= Gallon;
	}
	printf("%d.%d.%d", Gallon_sum, Sickle_sum, Knut_sum);
	return 0;
}
*/
//方法二
int main(){
	int a[3], b[3], c[3];
	scanf ("%d.%d.%d %d.%d.%d", &a[2], &a[1], &a[0], &b[2], &b[1], &b[0]);
	int carry = 0;  // 进位
	c[0] = (a[0] + b[0]) % 29;
	carry = (a[0] + b[0]) / 29;
	c[1] = (a[1] + b[1] + carry) % 17;
	carry = (a[1] + b[1] + carry) / 17;
	c[2] = a[2] + b[2] + carry;
	printf("%d.%d.%d", c[2], c[1], c[0]);
	return 0;
} 
