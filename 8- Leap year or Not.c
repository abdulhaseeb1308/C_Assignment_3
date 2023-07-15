// 8-Write a program to check whether a given year is a leap year or not
#include<stdio.h>
int main()
{
	int year;
	printf("Enter the Year");
	scanf("%d",&year);
	if(year%4 ==0)
	{
		printf("%d a Leap Year",year);
	}
	else
	{
		printf("%d not Leap Year",year);
	}
}
