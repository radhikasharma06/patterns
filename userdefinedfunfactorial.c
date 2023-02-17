#include<stdio.h>
int factorial(int num)
{
	int i,fact=1;
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	return fact;
}
void main()
{
	int res,a;
	printf("enter a number\n");
	scanf("%d",&a);
	res=factorial(a);
	printf("factorial of %d=%d",a,res);
}
