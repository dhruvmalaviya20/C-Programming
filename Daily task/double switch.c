#include <stdio.h>
int main()
{
	char a,b,c,d,e,f,g,h,i,j,k;
	printf("1. IT commerse\n");
	printf("2. BBA commerse\n");
	printf("3. B.com commerse\n");
	printf("choose any number of department: ");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			printf("available departments\n");
			printf("a. Frontend\n");
			printf("b. Backend\n");
			printf("c. Database\n");
			printf("choose any number of skill: ");
			scanf("%s",&b);
			switch (b)
			{
				case 'a':
					printf("x. React js\n");
					printf("y. Javascript\n");
					scanf("%c",&c);
					break;
					
				case 'b':
					printf("x. Python\n");
					printf("y. Node js\n");
					scanf("%c",&d);
					break;
					
				case 'c':
					printf("x. Djengo\n");
					printf("y. Mongodb\n");
					scanf("%c",&e);
					break;
			}
			break;
			{
			case 2 :
				printf("available departments\n");
				printf("a. Hotel management\n");
				printf("b. Human resources\n");
				printf("c. Marketing\n");
				printf("choose any number of skill: ");
				scanf("%s",&c);
				switch (c)
				{
					case 'a':
						printf("x. Bachelor of Hotel Management(BHM)\n");
						scanf("%C",&f);
						break;
						
					case 'b':
						printf("x. Human Resource Management(HRM)\n");
						printf("y. Exonomics of Human Resources\n");
						printf("z. Human Capital Management\n");
						scanf("%c",&g);
						break;
						
					case 'c':
						printf("x. Market analysis and research\n");
						printf("y. product pricing\n");
						printf("z. product design and distribution\n");
						scanf("%c",&h);
						break;
				}
				break;
			}
			{
				case 3 :
					printf("Available departments\n");
					printf("a. Finance\n");
					printf("b. Banking and Insurance\n");
					printf("c. LLB\n");
					printf("choos any number of skill: ");
					scanf("%s",&d);
					switch (d)
					{
						case 'a':
							printf("x. Chartered Account\n");
							printf("y. Managerial Economics\n");
							scanf("%c",&i);
							break;
							
						case 'b':
							printf("x. Banking management\n");
							printf("y. accountant\n");
							printf("z. Insurance analysis\n");
							scanf("%c",&j);
							break;
							
						case 'c':
							printf("x. Crime law\n");
							printf("y. Constitutional/Administrative law\n");
							printf("z. Contract law,Land law and Corporate law\n");
							scanf("%c",&k);
							break;
					}
					break;
			}
			break;
	}
}
