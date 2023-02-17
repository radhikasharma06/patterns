#include<stdio.h>
void main()
{
	int len,wid,height,volume;
	printf("enter length,width and height\n");
	scanf("%d%d%d",&len,&wid,&height);
	volume=len*wid*height;
	printf("volume=%d\n",volume);
}
