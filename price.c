#include<stdio.h>
void main()
{
	int price,dis;
	printf("enter price of product\n");
	scanf("%d",&price);
	if(price<=1000)
	{
		dis=(price/100)*10;
		price=price-dis;
		printf("price of product= %d",price);
	}
	else if(price<=5000)
	{
		dis=(price/100)*20;
		price=price-dis;
		printf("price of product=%d",price);
	}
	else if (price<=10000)
	{
		dis=(price/100)*30;
		price=price-dis;
		printf("price of product=%d",price);

	}
	else
	{
		dis=(price/100)*50;
		price=price-dis;
		printf("price of product=%d",price);
	}
}
