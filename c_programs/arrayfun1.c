#include<stdio.h>
void sum(int z[5])
{
	int i,t=0;
	printf("list\n");
	for(i=0;i<=4;i++)
	{
		printf("%d\n",z[i]);
		t=t+z[i];
	}
	printf("sum=%d",t);
}
void main()
{
	int a[5]={10,20,30,40,50};
	sum(a);
}
