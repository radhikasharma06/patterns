#include<stdio.h>
void main()
{
	int num,fact;
	fact=1;
	int i;
	i=1;
	printf("enter a number\n");
	scanf("%d",&num);
	while(i<=num)
	{
		fact=fact*i;
		i++;
	}
	printf("factorial of %d is %d", num,fact);
}
