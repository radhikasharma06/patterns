#include<stdio.h>
void main()
{
	float basic,gross,hra,da;
	printf("enter basic\n");
	scanf("%f",&basic);
	hra=(basic/100)*40;
	da=(basic/100)*20;
	gross=basic+hra+da;
	printf("gross=%f",gross);
	
	}
