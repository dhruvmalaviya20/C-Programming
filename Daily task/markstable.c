#include<stdio.h>
int main()
{
	int sub1,sub2,sub3,sub4,sub5;
	float total,pr;
	
	printf("marks of sub1: ");
	scanf("%d",&sub1);
	
	printf("marks of sub2: ");
	scanf("%d",&sub2);
	
	printf("marks of sub3: ");
	scanf("%d",&sub3);
	
	printf("marks of sub4: "); 
	scanf("%d",&sub4);
	
	printf("marks of sub5: ");
	scanf("%d",&sub5);
	
	total=sub1+sub2+sub3+sub4+sub5;
	pr=(total/500)*100;
	
	printf("\ntotal marks is: %f\n",total);
	printf("pr is: %f\n",pr);
	
	if (pr>=90)
	{
		printf("The Distriction");
	}
	else if(pr>=75 && pr<90)
	{
		printf("First class");
	}
	else if(pr>=60 && pr<=75)
	{
		printf("Second class");
	}
	else if(pr>=50 && pr<=60)
	{
		printf("Third class");
	}
	else
	{
		printf("Fail");
	}
	return 0;
}
