#include<stdio.h>
void factorial()
{
	int fact=1;
	int num;
	int i=1;
	printf("enter a number\n");
	scanf("%d",&num);
	while(i<=num)
	{
		fact=fact*i;
		i++;
		
	}
	printf("factorial of %d is %d",num,fact);
}
void main()
{
	factorial();
}
