#include<stdio.h>
void main()
{
	int a,b,c;
	int *p1;
	int *p2;
	a=10;
	b=4;
	p1=&a;
	p2=&b;
	c=*p1+*p2;
	c=a+b;
	printf("sum=%d",c);
}
