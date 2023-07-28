#include <stdio.h>
int main()
{
	int number;
	printf("please enter a number: ");
	scanf("%d",&number);
	
	if(number < 100)
	{
		printf("number is less than 100");
	}
	else if(number == 100)
	{
		printf("number is equal to 100");
	}
	else
	{
		printf("number is grater than 100");
	}
	return 0;
}
