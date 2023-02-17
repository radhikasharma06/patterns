#include<stdio.h>
void main()
{
	float a[7];
	a[0]=22.1;
	a[1]=22.3;
	a[2]=22.4;
	a[3]=33.3;
	a[4]=24.5;
	a[5]=21.2;
	a[6]=32.3;
	float *p;
	int i;
	p=&a;
	for(i=0;i<=6;i++)
	{
		printf("%d\n",*p);
		p++;
	}
}
