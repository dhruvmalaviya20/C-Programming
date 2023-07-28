//find last digit
#include <stdio.h>
int main()
{
	int n,r;
	printf("enter the number: ");
	scanf("%d",&n);
	r=n%10;
	printf("last digit is: %d",r);
	return 0;
}