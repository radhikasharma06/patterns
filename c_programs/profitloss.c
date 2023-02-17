#include<stdio.h>
void main()
{
	int sp,cp,result;
	printf("enter sp and cp\n");
	scanf("%d%d",&sp,&cp);
	if (sp>cp)
	{
		result=sp-cp;
		printf("profit=%d",result);
	}
	else
	{
		result=cp-sp;
		printf("loss=%d",result);
	}
	
}
