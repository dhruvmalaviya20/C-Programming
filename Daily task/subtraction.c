#include<stdio.h>
int main()
{
	int number1,number2,minus;
	printf("enter the first number: ");
	scanf("%d",&number1);
	printf("enter the second number: ");
	scanf("%d",&number2);
	minus=number1-number2;
	printf("%d-%d=%d",number1,number2,minus);
	return 0;
}
