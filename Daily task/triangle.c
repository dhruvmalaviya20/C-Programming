#include <stdio.h>
int main()
{
	int b,h,a;
	printf("enter triangle base:");
	scanf("%d",&b);
	printf("enter triangle height:");
	scanf("%d",&h);
	a=b*h/2;
	printf("area is: %d",a);
	return 0;
}
