#include<cstdio>
int main(){
	int sum, x;
	char op;
	scanf("%d%c", &sum, &op);
	while(op != '=')
	{
		scanf("%d", &x);
		switch(op){
			case'+':
				sum += x;
				break;
			case'-':
				sum -= x;
				break;
			case'*':
				sum *= x;
				break;
			case'/':
				if(x == 0) {
					printf("除法分母为零\n");
					return 0;
				}
				else{
					sum /= x;
					break;
				}
			default:
				printf("非法输入\n");
				return 0;
					
		}
		scanf("%c", &op);
	}
	printf("%d\n", sum);
	return 0;
}