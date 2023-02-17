#include<stdio.h>
int largest(int a,int b)
{
	if(a>b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
void main()
{
	int res;
	res=largest(4,6);
	printf("res=%d",res);
}
