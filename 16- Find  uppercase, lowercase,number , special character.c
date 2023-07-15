//16. Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lower case), a digit or a special character.
#include<stdio.h>
int main ()
{
	char a;
	printf("Enter the Alphabet: ");
	scanf("%c",&a);
	if (a>='A' && a<='Z')
	{
		printf("%c is a Uppercase Alphabet \n",a);
	}
	else if (a>='a' && a<='z')
	{
		printf("%c is a Lowercase Alphabet \n",a);
	}
	else if (a>=0 || a<=0)
	{
		printf("%c is A number",a);
	}
	else 
	{
		printf("You Enter Special Character ");
	}
}

