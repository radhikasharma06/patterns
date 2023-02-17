#include<stdio.h>
void area()
{
	int radius,area;
	printf("enter radius\n");
	scanf("%d",&radius);
	area= (22/7)*radius*radius;
	printf("area=%d",area);
}
void circumference()
{
	int radius,circumference;
	printf("enter radius\n");
	scanf("%d",&radius);
	circumference=2*(22/7)*radius;
	printf("circumference=%d",circumference);
}
void main()
{
	int choice;
	printf("press 1 for area, 2 for circumference\n");
	scanf("%d",&choice);
	switch(choice)
	
	{
		case 1:
		area();
		break;
		case 2:
		circumference();
		break;
		default:
		printf("you must enter 1 or 2 as choice");	
	}
}









