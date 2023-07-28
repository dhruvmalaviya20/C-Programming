#include<stdio.h>
int main()
{
	int n1,n2,div;
	printf("enter first number: ");
	scanf("%d",&n1);
	printf("enter second number: ");
	scanf("%d",&n2);
	div=n1/n2;
	printf("%d/%d=%d",n1,n2,div);
	return 0;
}
