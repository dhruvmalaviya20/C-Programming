#include <stdio.h>
int main()
{
	int i,n,sum=0;
	printf("enter the number: ");
	scanf("%d",&n);
	for(i=2;i<=n;i+=2)
	{
		sum+=i;
	}
	printf("sum of even number is: %d",sum);
	return 0;
}
//#include<stdio.h>
//int main()
//{
//   int i,n,sum=0;
//   printf("enter uppar limit: ");
//   scanf("%d",&n);
//   for(i=2;i<=n; i+=2)
//   {
//   	sum+=i;
//   }
//   printf("sum of even numbers:%d",n, sum);
//   return 0;
//}
