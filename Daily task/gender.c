#include <stdio.h>
int main()
{
	char g;
	printf("Enter M for male, F for female and o for others: ");
	scanf("%c",&g);
	if(g=='M' || g=='m')
	{
		printf("Your gender is male");
	}
	else if(g=='F' || g=='f')
	{
		printf("Your gender is female");
	}
	else if(g=='O' || g=='o')
	{
		printf("Your gender is others");
	}
	else
	{
		printf("please enter the right input....");
	}
}
