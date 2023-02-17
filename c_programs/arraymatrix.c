#include<stdio.h>
void main()
{
	int a[2][3];
	int i,j;
    printf("enter 6 elements\n");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&a[i][j]);
		}
    } 	
	printf("matrix a=\n");
	for(i=0;i<=1;i++)
	{
	    for(j=0;j<=2;j++)
		{
		printf("%d\t",a[i][j]);	
		}	
		printf("\n");
    }	
}
