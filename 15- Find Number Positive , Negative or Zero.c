//15. Write a program to check whether a given number is positive, negative or zero.
#include<stdio.h>
int main()
{
	int num;
	printf("ENTER THE NUMBER \n");
	scanf("%d",&num);
	if(num>0 ) 
	{
		printf("%d IS Positive Number \n",num);
		
	}
	else if(num<0 ) 
	{
		printf("%d IS Negative Number \n",num);
	}
	else 
	{
		printf("It IS Zero ",num);
	}
	
}
