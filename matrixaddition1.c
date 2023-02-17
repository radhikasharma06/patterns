#include<stdio.h>
void main()
{
	int a[2][2];
	int b[2][2];
	int c[2][2];
	int i,j;
	printf("enter matrix a\n");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
		printf("enter matrix b\n");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("matrix a =\n");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
		printf("matrix b =\n");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
		printf("matrix c =\n");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}

}
