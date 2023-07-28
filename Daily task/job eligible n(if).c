//eligible for job print by nested if
#include <stdio.h>
int main()
{
	int age;
	printf("enter the number of age: ");
	scanf("%d",&age);
	if(age<18)
	{
		printf("you are not eligible for job");
	}
	else
	{
		if(age>=18 && age<=50)
		{
			printf("you are eliginle for job");
		}
		else
		{
			printf("ready for a retirement");
		}
	}
	return 0;
}
