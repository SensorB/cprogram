#include<stdio.h>

int main()
{ 
	int a,b;
	int op;
	printf("\nEnter the Two numbers :");
	scanf("%d%c%d",&a,&op,&b);
	switch (op)
	{
	case 43:
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
