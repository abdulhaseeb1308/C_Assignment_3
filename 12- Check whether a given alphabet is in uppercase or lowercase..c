//12. Write a program to check whether a given alphabet is in uppercase or lowercase.
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
	else
	{
		printf("You Enter Invalid Alphabet");
	}
}

