#include <stdio.h>
int main()
{
	int a,b;
	printf("1.school of computer science\n");
	printf("2.school of business\n");
	printf("3.school of engineering\n");
	printf("make you selection\n");
	scanf("%d",&a);
	switch(a)
	{
		case 2:
			printf("available departments\n");
			printf("1.Department of commerce\n");
			printf("2.Department of purchasing");
			printf("Make your selection.\n");
			scanf("%d",&b);
			
			switch(b)
			{
				case 1:
					
					printf("you chose department of commerce\n");
					break;
					
					case 2:
						printf("you chose department of purchasing\n");
						break;
			}
			break;
	}
}
