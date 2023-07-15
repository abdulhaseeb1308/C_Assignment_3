//14. Write a program to check whether a given number is divisible by 7 or divisible by 3
#include<stdio.h>
int main()
{
	int num;
	printf("ENTER THE NUMBER \n");
	scanf("%d",&num);
	if(num%7==0 ) 
	{
		printf("%d IS DIVISIBLE BY 7 \n",num);
		
	}
	else if(num%3==0 ) 
	{
		printf("%d IS DIVISIBLE BY 3 \n",num);
	}
	else 
	{
		printf("%d IS NOT DIVISIBLE Both BY 7 Or 3 \n ",num);
	}
	
}
