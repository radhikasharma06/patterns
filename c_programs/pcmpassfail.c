#include<stdio.h>
void main()
{
	int p,c,m;
	printf("enter p,c,m marks\n");
	scanf("%d%d%d",&p,&c,&m);
	if ((p>30)&&(c>30)&&(m>30))
	{
		printf("pass");
	}
	else
	{
		printf("fail");
	}
}
