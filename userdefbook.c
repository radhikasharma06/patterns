#include<stdio.h>
struct book
{
	int bookid;
	char bookname;
	char author;
	int price;
	int numberofpages;
};
void main()
{
	struct book 1;
	struct book 2;
	struct book 3;
	    printf("enter book id,book name,author,price and number of pages of book 1 \n");
	scanf("%d%c%c%d%d",&book 1. bookid,&book 1. bookname,&book 1. author,&book 1 . price,&book 1 . numberofpages);
		printf("enter book id,book name,author,price and number of pages of book 2 \n");
	scanf("%d%c%c%d%d",&book 2. bookid,&book 2. bookname,&book 2. author,&book 2 . price,&book 2 . numberofpages);
		printf("enter book id,book name,author,price and number of pages of book 3 \n");
	scanf("%d%c%c%d%d",&book 3. bookid,&book 3. bookname,&book 3. author,&book 3 . price,&book 3 . numberofpages);
	
      	printf("book 1 details are\n");
	printf("bookid=%d\tbookname=%s\tauthor=%s\tprice=%d\tnumberofpages=%d\n",book 1 .bookid, book 1 .bookname, book 1 .author,book 1 . price, book 1 . numberofpages);
		printf("book 2 details are\n");
	printf("bookid=%d\tbookname=%s\tauthor=%s\tprice=%d\tnumberofpages=%d\n",book 2 .bookid, book 2 .bookname, book 2 .author,book 2 . price, book 2 . numberofpages);
		printf("book 3 details are\n");
	printf("bookid=%d\tbookname=%s\tauthor=%s\tprice=%d\tnumberofpages=%d\n",book 3 .bookid, book 3 .bookname, book 3 .author,book 3 . price, book 3 . numberofpages);
	
}
