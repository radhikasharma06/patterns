#include<stdio.h>
void main()
{
	int a,b,sum;
	int chk=9;
	printf("enter a and b\n");
	
	chk=scanf("%d",&a);
	if(chk=0)
	{
		printf("entered value is not an integer");
	}
	chk=scanf("%d",&b);
	
	printf("chk=%d",chk);
	
	sum=a+b;
	printf("sum=%d",sum);
}
