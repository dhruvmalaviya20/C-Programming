//print 1 to 50 even numbers using for loop....................
//#include <stdio.h>
//int main()
//{
//	int i;
//	printf("1 to 50 even numbers is: \n");
//	for(i=1;i<=50;i++)
//	{
//		if(i%2 == 0)
//		{
//			printf("%d ",i);
//		}
//	}
//	return 0;
//}

//print even numbers using for loop.............
#include <stdio.h>
int main()
{
	int i,n;
	printf("enter the number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i+=2)
	{
		printf("%d\n",i);
	}
	return 0;
}