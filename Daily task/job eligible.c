#include <stdio.h>
int main()
{
	int age;
	printf("enter your age: ");
	scanf("%d",&age);
	if(age<18)
	{
		printf("you are not eligible for job: ");
	}
	else
	{
		if(age>18 && age<50)
		{
			printf("you are eligible for job: ");
		}
		else
		{
			printf("ready for retirement");
		}
	}
	return 0;
}
