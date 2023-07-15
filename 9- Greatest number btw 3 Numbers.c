/*Write a program to find the greatest among three given numbers. Print number once 
if the greatest number appears two or three times.*/
#include<stdio.h>
#include<math.h>
int main ()
{
	float num1,num2,num3;
	printf("Enter the 1st Numbers ");
	scanf("%f",&num1);
	printf("Enter the 2nd Numbers ");
	scanf("%f",&num2);
	printf("Enter the 3rd Numbers ");
	scanf("%f",&num3);
	
if (num1>num2)
{
	if(num1>num3)
	{
		printf("%f is the greatest ",num1);
	}
	else 
	{
		printf("%f is the greatest",num3);
	}
	
}
else if (num1==num2)
{
	if(num1>num3)
	{
		printf("%f",num1);
		
	}
	else if (num3==num2)
	{
		printf("All are equal");
	}
	
	else
	{
		printf("%f is greater",num3);
	}
	
}
else 
{
	if(num2>num3)
	{
		printf("%f is the greatest ",num2);
	}
	else 
	{
		printf("%f is the greatest",num3);
	}
}
return 0;
}

