#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter a,b,c\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if (a>c)
		{
		printf("largest number is a %d",a);
	    }
	    else
	    {
	    	printf("largest number is c %d",c);
		}
	
    }
else
   {
	    if (b>c)
	    {
	    	printf("largest number is b %d",b);
		}
		else
		{
			printf("largest number is c %d",c);
		}
	
   }
}
