#include<stdio.h>
void main()
{
	int list[10];
	int i;
	printf("enter 10 numbers\n");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&list[i]);
	}
	printf("even numbers are\n");
	for(i=0;i<=9;i++)
	{
		if(list[i]%2==0)
		{
			printf("%d\n",list[i]);
		}
	}
}
