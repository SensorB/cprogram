#include<stdio.h>

int main()
{ 
	int a,b;
	char op;
	printf("\nEnter the Two numbers :");
	scanf("%d%c%d",&a,&op,&b);
	switch (op)
	{
	case '+':
		printf("The result is %d\n",a+b);
		break;
	case '-':
		printf("The result is %d\n",a-b);
		break;
	case '*':
		printf("The result is %d\n",a*b);
		break;

	case '/':
		printf("The result is %d\n",a/b);
		break;
	
	}
		return 0;
}
