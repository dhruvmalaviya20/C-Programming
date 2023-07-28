#include <stdio.h>
int main()
{
//	rectangle
	int length,width,area;
	printf("enter the length: ");
	scanf("%d",&length);
	printf("enter the width: ");
	scanf("%d",&width);
	area=length*width;
	printf("area is: %d\n",area);
	
//	triangle
	int base,height,zone;
	printf("enter the base: ");
	scanf("%d",&base);
	printf("enter the height: ");
	scanf("%d",&height);
	zone=base*height/2;
	printf("area is: %d\n",zone);	
	
//	circle
	float radius,place,PI=3.14;  
    printf("Enter radius of circle: ");  
    scanf("%f", & radius);  
    place = PI * radius * radius;  
    printf("Area of circle : %f", place);  
    return 0;
}
