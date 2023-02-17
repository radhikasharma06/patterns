#include<stdio.h>
void main()
{
	int a[4];
	int i,j;
	int temp;
	printf("enter any 4 elements\n");
	for(i=0;i<=3;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("the list is\n");
	for(i=0;i<=3;i++)
	{
		printf("%d\n",a[i]);
	}
	for(i=0;i<=3;i++)
	{
		for(j=i+1;j<=3;j++)
		{
			if(a[j]<a[i])
			{
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
	printf("the sorted list\n");
	for(i=0;i<=3;i++)
	{
		printf("%d\n",a[i]);
	}
}
