#include <stdio.h>
int main()
{
	int num1,num2;
	printf("enter the num1: ");
	scanf("%d",&num1);
	printf("enter the num2: ");
	scanf("%d",&num2);
	if(num1==num2)
	{
		printf("num1 or num2 is equal");
	}
	else
	{
		printf("num1 or num2 are not equal");
	}
	return 0;
}
