//17-Write a program which takes the length of the sides of a triangle as an input. Display whether the triangle is valid or not
#include<stdio.h>
int main()
{
	int side_1,side_2,side_3;
	printf("ENTER THE FIRST SIDE \n");
	scanf("%d",&side_1);
	printf("ENTER THE SECOND SIDE\n");
	scanf("%d",&side_2);
	printf("ENTER THE THIRD SIDE \n");
	scanf("%d",&side_3);
	if(side_1+side_2>side_3 && side_2+side_3>side_1 && side_1+side_3>side_2)
	{
		printf("Its a valid Triangle");
	}
	else
	{
		printf("Triangle is not Valid");
	}
	return 0;
	
}
