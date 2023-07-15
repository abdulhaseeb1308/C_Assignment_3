//11. Write a program to take marks of 5 subjects from the user. Assume marks are given 
//out of 100 and passing marks is 33. Now display whether the candidate passed the 
//examination or failed
#include<stdio.h>
int main ()
{
	float hindi,urdu,math,english,sst,total;
	float percentage;
	printf("Enter the marks Out of Hundred \n");
	printf("Enter the Marsks of English ");
	scanf("%f",&english);
	printf("Enter the Marsks of Hindi ");
	scanf("%f",&hindi);
	printf("Enter the Marsks of Urdu ");
	scanf("%f",&urdu);
	printf("Enter the Marsks of SST ");
	scanf("%f",&sst);
	printf("Enter the Marsks of MATH ");
	scanf("%f",&math);
	if (english>100 || hindi>100 || urdu>100 || sst>100 || math>100)
	{
		printf("You Enter The Invalid Marks");
		
	}
	if (english<=100 && hindi<=100 && urdu<=100 && sst<=100 && math<=100)
	{
		if (english>33 && hindi>33 && urdu>33 && sst>33 && math>33)
	    {
			printf("The Result is Pass \n ");
		}
		else 
		{
			printf("The Result is Fail \n");
		}
	total=(hindi+urdu+math+english+sst);
	percentage=(total/500)*100;
	printf("Your Percentage is %f ",percentage);
	return 0;
	}
	
}
