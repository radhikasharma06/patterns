#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter a,b,c\n");
	scanf("%d%d%d",&a,&b,&c);
	if (a<b)
	{
		if(a<c)
		{
			printf("youngest one is a %d",a);
		}
		else
		{
			printf("youngest one is c %d",c);
		}
	}
	else
	{
		if(b<c)
		{
			printf("youngest one is b %d",b);
		}
		else
		{
			printf("youngest one is c %d",c);
		}
	}
}
