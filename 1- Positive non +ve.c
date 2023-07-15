//1. Write a program to check whether a given number is positive or non-positive.
#include<stdio.h>
int main()
{
	int a;
	printf("ENTER THE NUMBER");
	scanf("%d",&a);
	if(a>0)
	{
		printf("Its a +ve number");
	}
	else
	{
		printf("its a non +ve number");
	}
}
