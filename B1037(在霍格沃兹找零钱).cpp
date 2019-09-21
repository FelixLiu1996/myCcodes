#include<cstdio>
const int Gallon = 17 * 29;
const int Sickle = 29;
/*
int main(){
	int Gallon_P, Sickle_P, Knut_P, Gallon_A, Sickle_A, Knut_A;
	int Gallon_R, Sickle_R, Knut_R;
	scanf("%d.%d.%d %d.%d.%d", &Gallon_P, &Sickle_P, &Knut_P, 
	&Gallon_A, &Sickle_A, &Knut_A);
	if ((Gallon_A > Gallon_P) || (Gallon_A == Gallon_P && Sickle_A > Sickle_P)
		 || (Gallon_A == Gallon_P && Sickle_A == Sickle_P && Knut_A > Knut_P)
		 	|| (Gallon_A == Gallon_P	&& Sickle_A	== Sickle_P	&& Knut_A == Knut_P)){
		if (Knut_A < Knut_P)
		{
			if (Sickle_A != 0)
			{
				Sickle_A = Sickle_A - 1;
				Knut_A = Knut_A + Sickle;
				Knut_R = Knut_A - Knut_P;		
			}
			else
			{
				Gallon_A = Gallon_A - 1;
				Sickle_A = Gallon - 1;
				Knut_A = Knut_A + Sickle;
				Knut_R = Knut_A - Knut_P;
			}
		}
		else Knut_R = Knut_A - Knut_P;
		if (Sickle_A < Sickle_P)
		{
			Gallon_A = Gallon_A - 1;
			Sickle_A = Sickle_A + Gallon;
			Sickle_R = Sickle_A - Sickle_P;
		}
		else Sickle_R = Sickle_A - Sickle_P;
		Gallon_R = Gallon_A - Gallon_P;
		printf("%d.%d.%d", Gallon_R, Sickle_R, Knut_R);
	}
	else
	{
		int a, b, c;
		a = Gallon_A;
		Gallon_A = Gallon_P;
		Gallon_P = a;
		b = Sickle_A;
		Sickle_A = Sickle_P;
		Sickle_P = b;
		c = Knut_A;
		Knut_A = Knut_P;
		Knut_P = c;
		if (Knut_A < Knut_P)
		{
			if (Sickle_A != 0)
			{
				Sickle_A = Sickle_A - 1;
				Knut_A = Knut_A + Sickle;
				Knut_R = Knut_A - Knut_P;		
			}
			else
			{
				Gallon_A = Gallon_A - 1;
				Sickle_A = Gallon - 1;
				Knut_A = Knut_A + Sickle;
				Knut_R = Knut_A - Knut_P;
			}
		}
		else Knut_R = Knut_A - Knut_P;
		if (Sickle_A < Sickle_P)
		{
			Gallon_A = Gallon_A - 1;
			Sickle_A = Sickle_A + Gallon;
			Sickle_R = Sickle_A - Sickle_P;
		}
		else Sickle_R = Sickle_A - Sickle_P;
		Gallon_R = Gallon_A - Gallon_P;
		printf("-%d.%d.%d", Gallon_R, Sickle_R, Knut_R);		
	}
}
*/
int main(){
	int Gallon_P, Sickle_P, Knut_P, Gallon_A, Sickle_A, Knut_A;
	scanf("%d.%d.%d %d.%d.%d", &Gallon_P, &Sickle_P, &Knut_P, 
	&Gallon_A, &Sickle_A, &Knut_A);
	int price = Gallon_P * Gallon + Sickle_P * Sickle + Knut_P;
	int money = Gallon_A * Gallon + Sickle_A * Sickle + Knut_A;
	int change = money - price;
	if (change < 0)
	{
		printf("-");
		change = -change;
	}
	printf("%d.%d.%d", change / Gallon, (change % Gallon) / Sickle, 
	change % Sickle);
	return 0;	
}