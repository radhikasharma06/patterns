#include<stdio.h>
void main()
{
	int l,b,h,vol;
	int *p1,*p2,*p3;
	l=2;
	b=3;
	h=4;
	p1=&l;
	p2=&b;
	p3=&h;
	vol=*p1**p2**p3;
	vol=l*b*h;
	printf("vol=%d",vol);
}
