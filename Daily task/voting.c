#include <stdio.h>
int main()
{
	int age;
	printf("enter the number: ");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("you are eligible");
	}
	else
	{
		printf("you are not eliginle");
	}
	return 0;
}
