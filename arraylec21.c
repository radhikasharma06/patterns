#include<stdio.h>
void main()
{
	int list[5];
	int i;
	printf("enter 5 elements\n");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&list[i]);
	}
	printf("the numbers greater than 100 are\n");
	for(i=0;i<=4;i++)
	{
		if(list[i]>100)
		{
			printf("%d\n",list[i]);
		}
	}
}
