#include<stdio.h>
void main()
{
	int a[5];
	int total;
	int i;
	printf("enter 5 elements\n");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("the list of elements\n");
	for(i=0;i<=4;i++)
	{
		printf("%d",a[i]);
	}
	for(i=0;i<=4;i++)
	{
		total=total+a[i];
	}
	printf("the sum of all elements %d\n",total);
}
