#include<stdio.h>
struct student
{
	int roll;
	char name[10];
	float marks;
};
void main()
{
	struct student s1;
	struct student s2;
	printf("enter roll number,name,marks of first student\n");
	scanf("%d%s%f",&s1.roll,&s1.name,&s1.marks);
	printf("enter roll number,marks and name of second student\n");
	scanf("%d%s%f",&s2.roll,&s2.name,&s2.marks);
	printf("first student details are\n");
	printf("roll=%d\tname=%s\tmarks=%f\n",s1.roll,s1.name,s1.marks);
		printf("second student details are\n");
	printf("roll=%d\tname=%s\tmarks=%f\n",s2.roll,s2.name,s2.marks);
	
}
