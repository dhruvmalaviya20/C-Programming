//print cube using for loop
#include <stdio.h>
int main()
{
	int i,n,cube;
	printf("enter the number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		cube=i*i*i;
		printf("number is: %d and cube of %d is: %d\n",i,i,cube);
	}
	return 0;
}