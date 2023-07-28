//find area of rectangle
#include <stdio.h>
int main()
{
	int length,width,area;
	printf("enter the length:");
	scanf("%d",&length);
	printf("enter the width:");
	scanf("%d",&width);
	area=length*width;
	printf("area is: %d*%d=%d",length,width,area);
	return 0;
}
