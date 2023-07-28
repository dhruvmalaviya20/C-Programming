#include <stdio.h>
int main()
{
//	Addition
	int sum1,sum2,sum;
	printf("add first number for sum: ");
	scanf("%d",&sum1);
	printf("add second number for sum: ");
	scanf("%d",&sum2);
	sum=sum1+sum2;
	printf("%d+%d=%d\n",sum1,sum2,sum);
	
//	substraction
	int sub1,sub2,sub;
	printf("add first number for sub: ");
	scanf("%d",&sub1);
	printf("add second number for sub: ");
	scanf("%d",&sub2);
	sub=sub1-sub2;
	printf("%d-%d=%d\n",sub1,sub2,sub);
	
//	multiplication
	int multi1,multi2,multi;
  	printf("add first number for multi: ");
  	scanf("%d",&multi1);
  	printf("add sceond number for multi: ");
  	scanf("%d",&multi2);
  	multi=multi1*multi2;
  	printf("%d*%d=%d\n",multi1,multi2,multi);
  	
//  division
  	int div1,div2,div;
  	printf("add first number for div: ");
	scanf("%d",&div1);
	printf("add sceond number for div: ");
	scanf("%d",&div2);
	div=div1/div2;
	printf("%d/%d=%d", div1,div2,div);
	
//modulo	
	int mod1,mod2,modulo;
	printf("add first number for mod: ");
	scanf("%d",&mod1);
	printf("add second number for mod: ");
	scanf("%d",&mod2);
	modulo=mod1%mod2;
	printf("%d %% %d=%d",mod1,mod2,modulo);
	return 0;
}
