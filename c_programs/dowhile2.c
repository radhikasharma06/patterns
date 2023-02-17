#include<stdio.h>
void main()
{
	int l,w,area;
	char choice;
	do
	{
		printf("enter l and w\n");
		scanf("%d%d",&l,&w);
		area=l*w;
		printf("area=%d",area);
		printf("press y to repeat and n to exit\n");
		fflush(stdin);
		scanf("%c",&choice);
		
	}
	while(choice=='y');
}
