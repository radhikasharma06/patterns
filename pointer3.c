#include<stdio.h>
void main()
{
	int a[3];
	a[0]=1;
	a[1]=2;
	a[2]=3;
	int *p;
	int i;
	p=&a;
	for(i=0;i<=2;i++)
	{
		printf("%d\n",*p);
		p++;
	}
}
