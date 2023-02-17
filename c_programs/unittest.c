#include<stdio.h>
void main()
{
	int marks;
	printf("enter marks\n");
	scanf("%d",&marks);
	if (marks<=4)
	{
		printf("fail");
	}
	else if (marks<=7)
	{
		printf("third");
	}
	else if (marks<=9)
	{
		printf("second");
	}
	else
	{
		printf("first");
	}
}
