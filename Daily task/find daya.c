#include <stdio.h>
int main()
{
	int days,years,weeks;
	printf("enter the days: ");
	scanf("%d",&days);
//	printf("enter the years: ");
//	scanf("%d",&years);
//	printf("enter the weeks: ");
//	scanf("%d",&weeks);
//	days=(weeks*7);
	years=(days/365);
//	weeks=(years*52);
//	printf("days: %d\n",days);
	printf("years: %d\n",years);
//	printf("weeks: %d\n",weeks);
	return 0;
}
