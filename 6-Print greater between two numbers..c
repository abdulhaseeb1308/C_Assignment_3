/*6. Write a program to print greater between two numbers. Print one number of both are 
the same*/
#include<stdio.h>
int main ()
{
	int num1,num2;
	printf("Enter the Two Number ");
	scanf("%d %d",&num1,&num2);
	if(num1>num2)
	{
		printf("%d is greater than %d",num1,num2);
	}
	if(num2>num1)
	{
		printf("%d is greater than %d",num2,num1);
	}
	if(num1==num2)
	{
		printf("both are same number");
	}
}
