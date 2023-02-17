#include<stdio.h>
int display(int a)
{
	return a;
}
void display2(int a)
{
	printf("value=%d\n",a);
}
void main()
{
	int x;
	int y;
	x=10;
	y=display1(x);
	printf("value of %d\n",y);
	display2(x);
}
