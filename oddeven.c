#include<stdio.h>

int main()
{
	int n;
	int min, max;
	printf("Enter the minimum range: ");
	scanf("%d",&min);
	printf("Enter the maximum Range:");
	scanf("%d",&max);
	printf("odd numbers in given range are:");
	for (n=min;n<=max; n++)
	if (n%2!=0)
		printf("%d",n);
	printf("\nEven numbers in given range are: ");
	for (n=min; n<=max; n++)
		if (n%3==0)

			printf("%d",n);
	return 0;
}
