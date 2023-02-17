#include<stdio.h>
void main()
{
	int res,num,i;
	i=1;
	printf("enter a number\n");
	scanf("%d",&num);
	while(i<=10)
	{
		res=num*i;
		printf("%d*%d=%d\n",num,i,res);
		i++;
	}
}
