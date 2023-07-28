#include <stdio.h>
int main()
{
	int age;
	printf("enter your age: ");
	scanf("%d",&age);
	if(age<15)
	{
		printf("you are not eligible for ride: ");
	}
	else
	{
		if(age>15 && age<45)
		{
			printf("you are eligible for ride: ");
		}
		else
		{
			printf("not responsible");
		}
	}
	return 0;
}
