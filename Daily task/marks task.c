#include <stdio.h>
int main()
{
	int marks;
	printf("enter the marks: ");
	scanf("%d",&marks);
	if (marks>=90)
	{
		printf("The Distriction");
	}
	else if(marks>=75 && marks<90)
	{
		printf("First class");
	}
	else if(marks>=60 && marks<=75)
	{
		printf("Second class");
	}
	else if(marks>=50 && marks<=60)
	{
		printf("Third class");
	}
	else
	{
		printf("Fail");
	}
	return 0;
}
