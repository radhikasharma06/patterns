#include<stdio.h>
void main()
{
	int len,b,h,area,vol;
	int choice;
	printf("enter len,b,h\n");
	scanf("%d%d%d",&len,&b,&h);
	printf("press 1 for area 2 for vol\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		area=len*b;
		printf("area=%d",area);
		break;
		case 2:
		vol=len*b*h;
		printf("vol=%d",vol);
		break;
		default:
		printf("you must enter 1 or 2 as choice ");
	}
}
