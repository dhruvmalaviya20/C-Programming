#include<stdio.h>
int main()
{ int i,j,k,l;
  for(i=1;i<=5;i++)
  {
    for(k=5;k>i;k--)
    {
      printf(" ");
    }
    for(j=1;j<=i;j++)
    {
      printf("%d",j);
    }
    for(l=j-2;l>0;l--)
      {
        printf("%d",l);
      }
    printf("\n");
  }
  return 0;
}