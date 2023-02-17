#include<stdio.h>
void main()
{
	int choice;
	int a,b;
	int c;
	do
	{
		printf("enter a and b\n");
		scanf("%d%d",&a,&b);
		c=a+b;
		printf("sum=%d\n",c);
		printf("press 1 to repeat and 2 to exit\n");
		scanf("%d",&choice);
	}
	while(choice==1);
}
