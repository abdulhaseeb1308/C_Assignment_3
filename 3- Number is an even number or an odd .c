//3. Write a program to check whether a given number is an even number or an odd 
//number
#include<stdio.h>
int main ()
{
	int num;
	printf("Enter The Number ");
	scanf("%d",&num);
	if(num%2 ==0)
	{
		printf("%d is even number",num);
	
	}
	else 
	{
		printf("%d is Odd Number ",num);
	}
	
}
