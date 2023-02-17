#include<stdio.h>
void main()
{
	float radius,circumference,area;
	char choice;
	printf("enter radius\n");
	scanf("%f",&radius);
	printf("press c for circumference a for area\n");
	fflush(stdin);
	scanf("%c",&choice);
	switch(choice)
	{
		case 'c':
		case 'C':
		circumference=2*22/7*radius;
		printf("circumference=%f",circumference);
		break;
		case 'a':
		case 'A':
		area=22/7*radius*radius;
		printf("area=%f",area);
		break;
		default:
		printf("you must enter c or a as choice");
	}
}
