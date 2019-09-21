#include<cstdio>
#include<cstring>
#include<cmath>
/*
struct bign{
	int d[1000];
	int len;
	bign(){
		memset(d, 0, sizeof(d));
		len = 0;
	}
};

bign change(char str[]){    //先用str字符串顺序存储 再逆序转存 
	bign a;
	a.len = strlen(str);
	for(int i = 0; i < a.len; i++)
	{
		a.d[i] = str[a.len - i - 1] - '0';
	}
	return a;
}
int compare(bign a, bign b)
{
	if(a.len > b.len) return 1;
	else if(a.len < b.len)  return -1;
	else{
		for(int i = 0; i < a.len; i++)
		{
			if(a.d[i] > b.d[i]) return 1;
			else if(a.d[i] < b.d[i]) return -1;
			
		}
		return 0;
	}
}

//高精度加法

bign add(bign a, bign b)
{
	bign c;
	int carry = 0;  //carry是进位 
	for(int i = 0; i < a.len || i < b.len; i++)
	{
		int temp = a.d[i] + b.d[i] + carry;
		c.d[c.len++] = temp % 10;  //因为len初始化为0
		carry = temp / 10; 
	}
	if(carry != 0)
	{
		c.d[c.len++] = carry;
	}
	return c;
}
*/

struct bign{
	int d[1000];
	int len;
	bign(){
		memset(d, 0, sizeof(d));
		len = 0;
	}
};

bign change(char str[])
{
	bign a;
	a.len = strlen(str);
	for(int i = 0; i < a.len; i++)
	{
		a.d[i] = str[a.len - i - 1] - '0';
	}
	return a;
}
//大整数加法 
bign add(bign a, bign b){
	bign c;
	int carry = 0;
	for(int i = 0; i < a.len || i < b.len; i++)
	{
		int temp = a.d[i] + b.d[i] + carry;
		c.d[c.len++] = temp % 10;
		carry = temp / 10;
	}
	if(carry != 0)
	{
		c.d[c.len++] = carry;
	}
	return c;
}
//大整数减法
bign sub(bign a, bign b)
{
	bign c;
	for(int i = 0; i < a.len || i < b.len; i++)
	{
		if(a.d[i] < b.d[i])
		{
			a.d[i + 1]--;
			a.d[i] += 10;
		}
		c.d[c.len++] = a.d[i] - b.d[i];
	}
	while(c.len - 1 >= 1 && c.d[c.len - 1] == 0)
	{
		c.len--;
	}
	return c;
} 
int compare(bign a, bign b)
{
	if(a.len > b.len) return 1;
	else if(a.len < b.len)  return -1;
	else{
		for(int i = 0; i < a.len; i++)
		{
			if(a.d[i] > b.d[i]) return 1;
			else if(a.d[i] < b.d[i]) return -1;
			
		}
		return 0;
	}
}
//大整数乘法 
bign multi(bign a, int b)
{
	bign c;
	int carry = 0;
	for(int i = 0; i < a.len; i++)
	{
		int temp = a.d[i] * b + carry;
		c.d[c.len++] = temp % 10;
		carry = temp / 10;
	}
	while(carry != 0)
	{
		c.d[c.len++] = carry % 10;
		carry /= 10;
	}
	return c;
}

//大整数除法
bign divide(bign a, int b, int &r)  //r表示余数 
{
	bign c;
	c.len = a.len;
	for(int i = a.len - 1; i >= 0; i--)
	{
		r = r * 10 + a.d[i];
		if(r < b) c.d[i] = 0;
		else{
			c.d[i] = r / b;
			r = r % b;
		}
	}
	while(c.len - 1 >= 1 && c.d[c.len - 1] == 0)
	{
		c.len--;
	}
	return c;	
} 

int main(){
	char str1[1000], str2[1000];
	gets(str1);
	//gets(str2);
	bign a = change(str1);
	int b, r = 0;
	scanf("%d", &b);
	//bign b = change(str2);
	/*if(compare(a, b) == -1)
	{
		for(int i = 0; i < a.len || i < b.len; i++)
		{
			int temp;
			temp = a.d[i];
			a.d[i] = b.d[i];
			b.d[i] = temp;
		}
	}*/
	bign c = divide(a, b, r);
	//bign c = multi(a, b);
	for(int i = c.len - 1; i >= 0; i--)
	{
		printf("%d", c.d[i]);
	}
	printf("\n");
	return 0;
}
