#include<stdio.h>
float simpleint(float prin,float rate,float time)
{
	float si;
	si=(prin*rate*time)/100;
	return si;
}
void main()
{
	float res;
	res=simpleint(1000,2.5,4.0);
	printf("simple interest=%f",res);
}
