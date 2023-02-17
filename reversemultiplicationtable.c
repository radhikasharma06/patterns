#include<stdio.h>
void main()
{
	int res,num,i;
	i=10;
	printf("enter a number\n");
	scanf("%d",&num);
	while(i>=1)
	{
		res=num*i;
		printf("%d*%d=%d\n",num,i,res);
		i--;
	}
}
