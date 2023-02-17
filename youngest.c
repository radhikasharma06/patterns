#include<stdio.h>
void main()
{
	int young,person1,person2;
	printf("enter the age of 2 people\n");
	scanf("%d%d",&person1,&person2);
	young=(person1<person2)?person1:person2; 
	printf("young=%d\n",young);
}
