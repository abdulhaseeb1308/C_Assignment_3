//18. Write a program which takes the month number as an input and display number of days in that month
#include<stdio.h>
int main()
{
	int num;
	printf("Enter The Month Number \n");
	scanf("%d",&num);
	if (num>=1 && num<=12)
	{
		if(num==2)
		{
			printf("Month have 28 Days \n");
		}	
		if(num==1|| num==3 || num==5 ||num==7 || num==8 || num==10 || num==12)
		{
			printf("Month have 31 Days \n");
		}
		else if ( num==4 || num==6 || num==9 || num==11)
		{
			printf("Month have 30 Days \n");
		}
	}
	else 
	{
		printf("YOU Have Enter the Wrong Month Number");
	}
}

