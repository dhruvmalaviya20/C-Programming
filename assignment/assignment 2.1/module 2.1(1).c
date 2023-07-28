#include <stdio.h>
int main()
{
	char name[50],address[50];
	int birthdate,age;
	printf("enter your name:");
	scanf("%s",&name);
	printf("enter your birthdate:");
	scanf("%d",&birthdate);
	printf("enter your age:");
	scanf("%d",&age);
	printf("enter your address:");
	scanf("%s",&address);
	printf(" Your name is: %s\n Your birthdate is: %d\n Your age is: %d\n Your address is: %s\n",name,birthdate,age,address);
	return 0;
}
