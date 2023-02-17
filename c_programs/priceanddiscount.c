#include<stdio.h>
void main ()
{
	float price,discount;
	printf("enter price\n");
	scanf("%f",&price);
	if(price>=10000)
	{
		discount=(price/100)*10;
		price=price-discount;
		printf("price with discount %f",price);
	}
	else
	{
	
	    discount=(price/100)*5;
	    price=price-discount;
	    printf("price with discount %f",price);
    }
}
