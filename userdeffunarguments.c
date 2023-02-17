#include<stdio.h>
void add()
{
	int a,b,c;
	printf("enter 2 numbers\n");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("sum=%d\n",c);
}
void add1(int a,int b)
{
	int c;
	c=a+b;
	printf("sum=%d\n",c);
}
void main()
{
	printf("hello students\n");
	int x,y;
	x=100;
	y=200;
	add();
	add1(x,y);
}
