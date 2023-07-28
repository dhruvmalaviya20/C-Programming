//print the number of factorial using for loop
#include <stdio.h>
int main()
{
	int num,i;
	printf("enter the number: ");
	scanf("%d",&num);
	printf("factorial of %d are\n",num);
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		printf("%d\n",i);
	}
	return 0;
}