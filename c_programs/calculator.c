#include<stdio.h>
void main()
{
	float a,b,add,sub,multiply,divide;
	int choice;
	printf("enter any 2 numbers\n");
	scanf("%f%f",&a,&b);
	printf("menu\n");
	printf("press 1 for add 2 for sub 3 for multiply 4 for divide\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
	    add=a+b;
	    printf("add=%f",add);
	    break;
	    case 2:
	    sub=a-b;
	    printf("sub=%f",sub);
	    break;
	    case 3:
	    multiply=a*b;
	    printf("multiply=%f",multiply);
	    break;
	    case 4:
	    divide=a/b;
	    printf("divide=%f",divide);
	    break;
	    default:
	    printf("you must enter 1,2,3,4 as choice");
	}
	
	
}
