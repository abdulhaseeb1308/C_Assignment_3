//2. Write a program to check whether a given number is divisible by 5 or not
#include<stdio.h>
int main ()
{
	int num;
	printf("Enter The Number ");
	scanf("%d",&num);
	if(num%5 ==0)
	{
		printf("%d is divisible by 5",num);
	
	}
	else 
	{
		printf("%d is not Divible by 5 ",num);
	}
	
}
