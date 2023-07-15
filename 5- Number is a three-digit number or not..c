//5. Write a program to check whether a given number is a three-digit number or not.
#include<stdio.h>
int main ()
{
	int num;
	printf("Enter The Number ");
	scanf("%d",&num);
	if(num>99 & num<=999)
	{
		printf("Its a 3 Digit Numbet");
	}
	else
	{
		printf("its not 3 digit number");
	}
}
