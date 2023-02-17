#include<stdio.h>
void main()
{
	float temp;
	printf("enter temp\n");
	scanf("%f",&temp);
	if (temp<=20)
	
	{
		printf("winter");
		
	}
	else if (temp<=24)
	{
		printf("spring");
		
	}
	else if (temp<=30)
	{
		printf("rainy");
	}
	else
	{
		printf("summer");
	}
}
