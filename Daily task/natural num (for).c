#include <stdio.h>
void main()
{
   int i,n,sum=0;
   printf("Input Value : ");
   scanf("%d",&n);
   printf("\nThe first %d natural numbers are:\n",n);
   for(i=1;i<=n;i++)
   {
     printf("%d ",i);
     sum+=i;
   }
   printf("\nThe Sum of natural numbers are: %d \n",sum);
//   return 0;

}
