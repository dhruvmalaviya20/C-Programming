#include <stdio.h>
int main()
{
	int year;
	printf("enter the year: ");
	scanf("%d",&year);
	if(year%4==0)
	{
		printf("Is leap year");
	}
	else
	{
		printf("Is not leap year");
	}
}
