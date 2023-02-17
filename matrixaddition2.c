#include<stdio.h>
void main()
{
	int a[3][2];
	int i,j;
    printf("enter 6 numbers\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=1;j++)
		{
		
		scanf("%d",&a[i][j]);
        }	
    }
    printf("matrix a=\n");
    for(i=0;i<=2;i++)
    {
    	for(j=0;j<=1;j++)
    	{
         printf("%d\t",a[i][j]);		
		}
		printf("\n");
	}
	printf("list of numbers greater than 5\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=1;j++)
	    {
		if (a[i][j]>5)
	    	{
			printf("%d\n",a[i][j]);
	     	}
	    }
	}
}
