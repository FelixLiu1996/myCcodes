#include <iostream.h>
#include <string.h>
#include <stdlib.h>
/*
void main()
{
	int a[10];
	cout<<"type 10 numbers"<<endl;
	for (int i = 0; i < 10; i++)
	{
		cin>>a[i];
	}
	for (int j = 9; j >= 0; j--)
	{
		cout<<a[j]<<'\t';
	}
}
*/
/*
void main()
{
	int score[10], sum, max, min;
	float average;
	cout<<"输入十名同学的成绩"<<endl;
	for (int i = 0; i < 10; i++)
	{
		cin>>score[i];
	}
	sum = 0;
	for ( i = 0; i < 10; i++)
	{
		sum += score[i];
	}
	average = (float)sum/10;
	cout<<"十名同学的平均成绩为"<<average<<endl;
//	max = score[0];
	min = score[0];
	for ( i = 1; i < 10; i++)
	{
		if (max < score[i])
		{
			int t;
			max = score[i];
			t = score[0];
			score[0] = score[i];
			score[i] = t;
		}
	}
	cout<<"十名同学的最高分为"<<max<<endl;
	//	min = score[0];
	for ( i = 1; i < 10; i++)
	{
		if (min > score[i])
		{
			int t = 0;
			min = score[i];
			score[0] = t;
			score[i] = score[0];
			t = score[i];
		}
	}
	cout<<"十名同学的最低分为"<<min<<endl;
}
*/
/*
void main()
{
	int a, b, c;
	a = 10;
	b = 3;
	c = a;
	a = b;
	b = c;
	cout<<a<<'\t'<<b<<'\t'<<c<<'\t';
}
*/
/* 冒泡排序法
void main()
{
	int a[] = {35, 12, 4, 9, 46, 15, 2, 73, 53, 26};
	//int t;
	for (int j = 9; j >= 0; j--)
	{
		//int t;
		for (int i = 0; i <= j; i++)
		{
			if(a[i] > a[i+1])
			{
			t = a[i];
			a[i] = a[i+1];
			a[i+1] = t;
			}
		}
	}

	for (int i = 0; i < 10; i++)
	{
		cout<<a[i]<<'\t';
	}

}
*/
/*  选择排序法
void main()
{
	int a[] = {35, 12, 4, 9, 46, 15, 2, 73, 53, 26};
	int t;
	for (int i = 0; i <= 9; i++)
	{
		for (int j = i; j <= 9; j++)
		{
			if (a[i] > a[j])
			{
				//int t;
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
	for (int k = 0; k < 10; k++)
	{
		cout<<a[k]<<'\t';
	}	
}
*/
/*  交换数组内容
void main()
{
	int a[] = {8, 3, 5, 1, 9, 7, 2, 11, 56, 6};
	int t;
	for (int i = 0; i <= 4; i++)
	{
		t = a[i];
		a[i] = a[9-i];
		a[9-i] = t;
	}
	for (int j = 0; j <= 9; j++)
	{
		cout<<a[j]<<'\t';
	}
}
*/
/*
void main()
{
	int a[3][4];
	cout<<"输入12个整数"<<endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin>>a[i][j];
		}
	}
	for (i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout<<a[i][j]<<'\t';
		}
		cout<<endl;
	}
}
*/
/*  自动创建矩阵
void main()
{
	int a[4][4];
	int row ,cel;
	int d = 2;
	for (row = 0; row < 4; row++)
	{
		for (cel = 0; cel < 4; cel++)
		{
			//d = 2;
			if (row >= cel)
			{
				a[row][cel] = 1;
			}
			else 
				a[row][cel] = d++;
		}
	}
	for (row = 0; row < 4; row++)
	{
		for (cel = 0; cel < 4; cel++)
		{
			cout<<a[row][cel]<<'\t';
		}
		cout<<endl;
	}
}
*/
/*  两个矩阵相加
void main()
{
	int a[][4] = {{1, 2, 3, 4}, {5, 6, 7, -4}, {2, 3, -2, 4}, {4, -1, 1, 5}};
	int b[][4] = {{0, 2, 4, 3}, {-3, -5, 4, 2}, {4, -3, 6, 7}, {3, 9, -6, 1}};
	int sum[4][4],i,j;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			sum[i][j] = a[i][j] + b[i][j];
		}
	}
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			cout<<sum[i][j]<<'\t';
		}
		cout<<endl;
	}
}
*/
/*
void main()
{
	int stu_score[5][3] = {{90, 80, 85}, {70, 75, 80}, {65, 70, 75}, {85, 50, 60}, {80, 90, 70}};
	float stu_ave[5];
	int i, j, sum;
	int stu = 1001;
	for (i = 0; i < 5; i++)
	{
		sum = 0;
		for (j = 0; j < 3; j++)
		{
			sum = stu_score[i][j] + sum; 
		}
		stu_ave[i] = (float)sum / 3;
	}
	for (i = 0; i < 5; i++)
	{	cout<<stu++<<"  ";
		for (j = 0; j < 3; j++)
		{
			cout<<stu_score[i][j]<<"  ";
		}
		cout<<stu_ave[i]<<endl;
	}
}
*/
/*
void main()
{
	char str[10];
	int i;
	for (i = 0; i < 10; i++)
	{
		cin>>str[i];
	}
	for (i = 0; i < 10; i++)
	{
		cout<<str[9 - i]<<"  ";
	}
}
*/
/*
void main()
{
	char str[15];
	cin.getline(str, 7);
	cout<<str<<endl;
}
*/
/*
void main()
{
	char s1[20] = "Hello";
	char s2[] = "world";
	strcat(s1, s2);
	cout<<s2;

	char str[] = "aaBB";
//	cout<<strupr(str);
//	cout<<sizeof(str);
}
*/
/*  判断是否是回文字符串
void main()
{
	char str[50];
//	cout<<strlen(str);
	cout<<"输入一串字符串"<<endl;
	cin.getline(str,50);
	int i;
	int result = 1;
	for (i = 0; i <= (strlen(str) / 2); i++)
	{
		if (str[i] != str[strlen(str) - i - 1])
		{
			//cout<<"该字符串不是回文字符串"<<endl;
			result = 0;
			break;
		}
	}
	if (result == 1)
		cout<<"字符串"<<str<<"是回文字符串"<<endl;
	else 
		cout<<"字符串"<<str<<"不是回文字符串"<<endl;
}
*/
/*  不用strcpy函数对字符串进行复制
void main()
{
	char str1[20];
	char str2[20];
	cout<<"请输入一串字符串"<<endl;
	cin.getline(str1, 20);
	int i;
	for (i = 0; i <= strlen(str1); i++)
	{
		str2[i] = str1[i];
	}
	cout<<"字符串str2为："<<endl;
	cout<<str2;
}
*/
/*  不用strcat函数对字符串进行连接
void main()
{
	char str1[40],str2[20];
	cout<<"输入两串字符串"<<endl;
	cin.getline (str1, 40);
	cin.getline (str2, 20);
	int i;
	int len = strlen (str1);
	for (i = 0; i <= strlen(str2); i++)
	{
		str1[len + i] = str2[i];
	}
	cout<<"合并后的字符串为："<<endl;
	cout<<str1<<endl;
}
*/
/*
void main()
{
	int i;
	int a[21];
	for (i = 0; i < 21; i++)
	{
		a[i] = i + 1;
	}
	int n = 21;
	int i;
	while (n >= 1)
	{
		
	}
}
*/
/*  字符串比对
void main()
{
	char str[6][20] = {{"hello"}, {"heello"}, {"hello"}, {"heloo"}, {"hello"}, {"hello"}};
	char str1[] = "heello";
	int n = 0;
	int i;
	for (i = 0; i <= 5; i++)
	{
		if (strcmp(str[i],str1) == 0)
		{
			n = n + 1;
		}
	}
	cout<<n<<endl;
}
*/
/*	 输出转置矩阵
void main()
{
	int a[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
	int b[4][3];
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			b[j][i] = a[i][j];
		}
	}
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cout<<b[i][j]<<'\t';
		}
		cout<<endl;
	}
}
*/
/*  求矩阵主副对角线元素之和
void main()
{
	int a[5][5];
	cout<<"请输入一个矩阵"<<endl;
	int i, j;
	int sum1 = 0, sum2 = 0;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
			cin>>a[i][j];
	}
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (i == j)
			{
				sum1 += a[i][i];
			}
		}
	}
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (i + j == 4)
			{
				sum2 += a[i][j];
			}
		}
	}
	cout<<"矩阵的主对角线元素之和为 "<<sum1<<endl;
	cout<<"矩阵的副对角线元素之和为 "<<sum2<<endl;
}
*/  
/*  不完整的计算单词数
void main()
{
	char str[50];
	cin.getline (str, 50);
	int i;
	int n = 0;
	for (i = 0; i < 50; i++)
	{
		if (str[i] == ' ')
		{
			n = n + 1;
		}
		if (str[i] == '\0')
		{	n = n + 1;
			break;
		}
		else continue;
	}
	cout<<n;
}
*/
/*  结构体
struct employee
{
	char name[10];
	char sex[4];
	int age;
	char address[20];
};
struct student
{
	char name[10];
	int age;
	char sex[4];
	int grade;
} stu1, stu2;
void main()
{
	employee emp1, emp2;
	struct date
	{
		int year, month, day;
	} date1, date2;
	emp1.age = 39;
	strcpy (emp1.name, "zhang san");
	strcpy (emp1.address, "nanjing");
	emp2 = emp1;
	cout<<emp2.address<<'\t';
}
*/
/*
struct student
{
	int code;     //学号
	char name[10];
	float eng, phy, math;
};
void Print (student stu[], int n)
{
	cout<<"姓名 "<<'\t'<<"学号"<<'\t'<<"英语"<<'\t'<<
		"物理"<<'\t'<<"数学"<<endl;
	int i;
	for (i = 0; i < n; i++)
	{
	cout<<stu[i].name<<'\t'<<stu[i].code<<'\t'<<stu[i].eng<<'\t'<<
		stu[i].phy<<'\t'<<stu[i].math<<endl;	
	}
}
void main()
{
	student stu[3] = {{1, "张三", 88, 90, 95}, {2, "李四", 85, 87, 90}, {3, "王五", 80, 90, 97}};
	Print (stu, 3);
}
*/
/*  枚举示例
enum direction {east = 0, south = 1, west = 2, north = 3};
void main()
{
	direction dir ;
	int i;
	cout<<"请输入0--3的数字分别代表东南西北四个方向"<<endl;
	cin>>i;
	switch (i)
	{
	case 0 : dir = east; break;
	case 1 : dir = south; break;
	case 2 : dir = west; break;
	case 3 : dir = north; 
	}
	switch (dir)
	{
	case east : cout<<"方向为东"<<endl; break;
	case south : cout<<"方向为南"<<endl; break;
	case west : cout<<"方向为西"<<endl; break;
	case north : cout<<"方向为北"<<endl; 
	}
}
*/
/*
enum colors
{
	red, blue, green, black, white, yellow
};
void main()
{
	colors colors[6];
	int n,i;
	cout<<"输入0至5六个数字分别代表红、蓝、绿、黑、白、黄六个颜色"<<endl;
	for (i = 0; i < 6; i++)
	{
		cin>>n;
		if (n > 5 || n < 0)
		{
			cout<<"输入的数字有误"<<endl;
			exit(0);
		}
		else
		switch(n)
		{
		case 0 : colors[i] = red; break;
		case 1 : colors[i] = blue; break;
		case 2 : colors[i] = green; break;
		case 3 : colors[i] = black; break;
		case 4 : colors[i] = white; break;
		case 5 : colors[i] = yellow; 
		}
	}
	for (i = 0; i < 6; i++)
	{
		switch (colors[i])
		{
		case red : cout<<"红"<<'\t'; break;
		case blue : cout<<"蓝"<<'\t'; break;
		case green : cout<<"绿"<<'\t'; break;
		case black : cout<<"黑"<<'\t'; break;
		case white : cout<<"白"<<'\t'; break;
		case yellow : cout<<"黄"<<'\t'; 
		}
	}
}
*/
enum Sex {male, female};
struct Date
{
	int year, month, day;
};
enum Position {Programmer, Saler, Manager};
struct employee
{
	int code;
	char name[20];
	Sex sex;
	Date hire_date;
	Position pos;
	float salary;
};
void Print_employee(employee e)
{
	cout<<"工号："<<e.code<<endl;
	cout<<"姓名："<<e.name<<endl;
//	int i;
	cout<<"性别：";
/*	switch (i)
	{
	case 0 : e.sex = male; break;
	case 1 : e.sex = female; 
	}  */
	switch (e.sex)
	{
	case male : cout<<"男"<<endl; break; 
	case female : cout<<"女"<<endl;
	}
	cout<<"招聘日期："<<e.hire_date.year<<"年"<<e.hire_date.month<<"月"<<e.hire_date.day<<"日"<<endl;
//	int j;
	cout<<"职务：";
/*	switch (j)
	{
	case 0 : e.pos = Programmer; break;
	case 1 : e.pos = Saler; break;
	case 2 : e.pos = Manager;
	} */
	switch (e.pos)
	{
	case Programmer : cout<<"程序员"<<endl; break;
	case Saler : cout<<"销售员"<<endl; break;
	case Manager : cout<<"经理"<<endl; break;
	}
	cout<<"工资："<<e.salary<<endl;
}
void main()
{
	employee li;
	li.code = 1000;
	strcpy (li.name, "李雷");
	li.sex = male;
	li.hire_date.year = 2007;
	li.hire_date.month = 5;
	li.hire_date.day = 10;
	li.pos = Manager;
	li.salary = 8000;
	Print_employee(li);
}


