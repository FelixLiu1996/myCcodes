#include<stdio.h>
struct person{
	char name[10];
	int year, month, day;	
}Max, Min, temp, right, left;
/*
int main()
{
	int n, count = 0;
	scanf("%d", &n);
	person temp, Max, Min;
	Max.year = 2014, Max.month = 9, Max.day = 6, Min.year = 1814, Min.month = 9, Min.day = 6;
	for (int i = 0; i < n; i++)
	{
		scanf("%s%d/%d/%d", &temp.name, &temp.year, &temp.month, &temp.day);
		if (temp.year > 1814 && temp.year < 2014) // 先将中间稳定年的划分出来比较 
		{
			count++;
			if (temp.year < Max.year)  // 求最大年龄的人 比较看是不是同一年 
			{
				Max = temp;
			}
			else if (temp.year == Max.year)  // 是同一年比较月份大小 
			{
				if (temp.month < Max.month)
				{
					Max = temp;
				}
				else if (temp.month == Max.month)
				{
					if (temp.day < Max.day)
					{
						Max = temp;
					}
				}
			}
			if (temp.year > Min.year)
			{
				Min = temp;
			}
			else if (temp.year == Min.year)
			{
				if (temp.month > Min.month)
				{
					Min = temp;
				}
				else if (temp.month == Min.month)
				{
					if (temp.day > Min.day)
					{
						Min = temp;
					}
				}
			} 
		}
		if (temp.year == 1814)   //左边的同年单独讨论 
		{
			if (temp.month > 9)
			{
				count++;
				if (temp.year < Max.year)  // 求最大年龄的人 比较看是不是同一年 
				{
				Max = temp;
				}
				else if (temp.year == Max.year)  // 是同一年比较月份大小 
				{
					if (temp.month < Max.month)
					{
						Max = temp;
					}
					else if (temp.month == Max.month)
					{
						if (temp.day < Max.day)
						{
							Max = temp;
						}
					}
				}
				if (temp.year > Min.year)
				{
					Min = temp;
				}
				else if (temp.year == Min.year)
				{
					if (temp.month > Min.month)
					{
						Min = temp;
					}
					else if (temp.month == Min.month)
					{
						if (temp.day > Min.day)
						{
							Min = temp;
						}
					}
				} 
			}
			if (temp.month == 9)
			{
				if (temp.day >= 6)
				{
					count++;
					if (temp.year < Max.year)  // 求最大年龄的人 比较看是不是同一年 
					{
					Max = temp;
					}
					else if (temp.year == Max.year)  // 是同一年比较月份大小 
					{
						if (temp.month < Max.month)
						{
							Max = temp;
						}
						else if (temp.month == Max.month)
						{
							if (temp.day < Max.day)
							{
								Max = temp;
							}
						}
					}
					if (temp.year > Min.year)
					{
						Min = temp;
					}
					else if (temp.year == Min.year)
					{
						if (temp.month > Min.month)
						{
							Min = temp;
						}
						else if (temp.month == Min.month)
						{
							if (temp.day > Min.day)
							{
								Min = temp;
							}
						}
					}
				}
			}
		}
		
		if (temp.year == 2014)  //右边的同年单独讨论 
 		{
			if (temp.month < 9)
			{
				count++;
				if (temp.year < Max.year)  // 求最大年龄的人 比较看是不是同一年 
				{
				Max = temp;
				}
				else if (temp.year == Max.year)  // 是同一年比较月份大小 
				{
					if (temp.month < Max.month)
					{
						Max = temp;
					}
					else if (temp.month == Max.month)
					{
						if (temp.day < Max.day)
						{
							Max = temp;
						}
					}
				}
				if (temp.year > Min.year)
				{
					Min = temp;
				}
				else if (temp.year == Min.year)
				{
					if (temp.month > Min.month)
					{
						Min = temp;
					}
					else if (temp.month == Min.month)
					{
						if (temp.day > Min.day)
						{
							Min = temp;
						}
					}
				} 
			}
			if (temp.month == 9)
			{
				if (temp.day <= 6)
				{
					count++;
					if (temp.year < Max.year)  // 求最大年龄的人 比较看是不是同一年 
					{
					Max = temp;
					}
					else if (temp.year == Max.year)  // 是同一年比较月份大小 
					{
						if (temp.month < Max.month)
						{
							Max = temp;
						}
						else if (temp.month == Max.month)
						{
							if (temp.day < Max.day)
							{
								Max = temp;
							}
						}
					}
					if (temp.year > Min.year)
					{
						Min = temp;
					}
					else if (temp.year == Min.year)
					{
						if (temp.month > Min.month)
						{
							Min = temp;
						}
						else if (temp.month == Min.month)
						{
							if (temp.day > Min.day)
							{
								Min = temp;
							}
						}
					}
				}
			}
		}
	}
	if (count == 0) printf("0\n");
	if (count != 0)
	{
		printf("%d %s %s", count, Max.name, Min.name);
	}
	return 0;
}
*/

//  编写比较函数来比较日期
bool Lessequ(person a, person b)
{
	if (a.year != b.year) return a.year <= b.year;
	else if (a.month != b.month) return a.month <= b.month;
	else return a.day <= b.day;
} 

bool Moreequ(person a, person b)
{
	if (a.year != b.year) return a.year >= b.year;
	else if (a.month != b.month) return a.month >= b.month;
	else return a.day >= b.day;
}
void init()
{
	Max.year = left.year = 1814;
	Min.year = right.year= 2014;
	Max.month = Min.month = right.month = left.month = 9;
	Max.day = Min.day = right.day = left.day = 6;
}
int main()
{
	init();
	int n, count = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%s %d/%d/%d", temp.name, &temp.year, &temp.month, &temp.day);
		if (Moreequ(temp, left) && Lessequ(temp, right))
		{
			count++;
			if (Lessequ(temp, Max))  Max = temp;
			if (Moreequ(temp, Min))  Min = temp;
		}
	}
	if (count == 0)  printf("0\n");
	else printf("%d %s %s\n", count, Max.name, Min.name);
	return 0;
}
