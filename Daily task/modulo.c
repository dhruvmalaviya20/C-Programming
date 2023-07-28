#include <stdio.h>
int main()
{
	int a,b,modulo;
	printf("enter first number:");
	scanf("%d",&a);
	printf("enter second number:");
	scanf("%d",&b);
	modulo=a%b;
	printf("%d %% %d = %d",a,b,modulo);
	return 0;
}
