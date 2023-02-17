#include<stdio.h>
void main()
{
	float temp[7];
	int i;
	float avg;
	printf("enter 7 days temp\n");
	for(i=0;i<=6;i++)
	{
		scanf("%f",&temp[i]);
	}
	printf("7 days temp\n");
	for(i=0;i<=6;i++)
	{
		printf("temp=%f\n",temp[i]);
	}
	avg=(temp[0]+temp[1]+temp[2]+temp[3]+temp[4]+temp[5]+temp[6])/7;
	printf("avg temp=%f",avg);
}
