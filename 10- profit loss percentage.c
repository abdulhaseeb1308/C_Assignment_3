//Write a program which takes the cost price and selling price of a product from the 
//user. Now calculate and print profit or loss percentage.

#include<stdio.h>
int main ()
{
	float cost,sell,profit,loss;
	printf("Enter the Cost Price ");
	scanf("%f",&cost);
	printf("Enter the selling price ");
	scanf("%f",&sell);
	profit=(sell/cost)*100;
	if(profit>100)
	{
		printf("We have a profit of %f percent",profit);
	}
	else if(profit==100)
	{
		printf("No profit No loss");
	}
	else if (profit<100)
	{
		printf("we have a loss of %f percent",profit);
	}
	
}
