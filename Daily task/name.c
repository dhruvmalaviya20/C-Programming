#include <stdio.h>
int main()
{
	char name[50],address[50];
	int age,birthdate;
	
	printf("enter your name: ");
	scanf("%s",&name);
	
	printf("enter your birthdate: ");
	scanf("%d",&birthdate);
	
	printf("enter your age: ");
	scanf("%d",&age);
	
	printf("enter your address: ");
	scanf("%s",&address);
	
	printf(" your name is: %s \n your birthdate is: %d \n your your age is: %d \n your address is: %s \n",name,birthdate,age,address);
	return 0;
}
