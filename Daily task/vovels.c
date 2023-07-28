#include <stdio.h>
int main()
{
	char word;
	printf("enter the word: ");
	scanf("%c",&word);
	
	if(word=='a'||word=='e'||word=='i'||word=='o'||word=='u')
	{
		printf("value is vowel");
	}
	else
	{
		printf("value is consonant");
	}
	return 0;
}
