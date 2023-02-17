#include<stdio.h>
void main()
{
	int units;
	float charges;
	printf("enter the units consumed\n");
	scanf("%d",&units);
       if(units<=200)
   	   {
		
	   charges=0.5*units;
	   }
	   else if(units<=400)
	   {
		charges=100+0.65*(units-200);
        }
	    else if(units<=600)
	    {
		  charges=230+0.8*(units-400);
	    }
	     else
	    {
		charges=390+(units-600)*1;
		
	    }
	printf("charges=%f\n",charges);
}
