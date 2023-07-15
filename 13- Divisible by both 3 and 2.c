//13. Write a program to check whether a given number is divisible by 3 and divisible by 2.
#include<stdio.h>
int main()
{
	int num;
	printf("ENTER THE NUMBER \n");
	scanf("%d",&num);
	if(num%3==0 && num%2==0) 
	{
		printf("%d IS DIVISIBLE BY Both 3 And 2 \n",num);
	}
	
	else 
	{
		printf("%d IS NOT DIVISIBLE Both BY 3 And 2 \n ");
	}
	
}
