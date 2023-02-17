#include<stdio.h>
float area(float radius)
{
	float area;
	area=3.14*radius*radius;
	return area;
}
void main()
{
	float res;
	res=area(4.0);
	printf("area of circle=%f",res);
}
