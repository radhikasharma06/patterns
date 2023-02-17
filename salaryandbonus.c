#include<stdio.h>
void main()
{
	int salary,experience;
	printf("enter salary and experience\n");
	scanf("%d%d",&salary,&experience);
	if(salary>=5000)
	{
		if(experience>=10)
		{
			salary=salary+5000;
			printf("salary with bonus %d",salary);
		}
		else
		{
			salary=salary+3000;
			printf("salary with bonus %d",salary);
		}
	}
	else
	{
		salary=salary+1000;
		printf("salary with bonus %d",salary);
	}
	
}
