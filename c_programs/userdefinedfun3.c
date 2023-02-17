#include<stdio.h>
void area()
{
	int len,wid,area;
	printf("enter len and wid\n");
	scanf("%d%d",&len,&wid);
	area=len*wid;
	printf("%d",area);
}
void vol()
{
	int len,wid,height,vol;
	printf("enter len,wid,height\n");
	scanf("%d%d%d",&len,&wid,&height);
	vol=len*wid*height;
	printf("%d",vol);
}
void main()
{
	printf("welcome to user defined functions in c\n");
	area();
	vol();
}












