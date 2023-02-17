#include<stdio.h>
void main()
{
	int a[4],b[4];
	int i;
	printf("enter 4 elements\n");
	for(i=0;i<=3;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=3;i++)
	{
		b[i]=a[i];
	}
	for(i=0;i<=3;i++)
	{
		printf("%d\n",a[i]);
	}
	for(i=0;i<=3;i++)
	{
		printf("%d\n",b[i]);
	}
}
