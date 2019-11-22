//Write a C program to input week number and print week day//
#include<stdio.h>
void main()
{
	int weeknum;
	printf("enter week number\n");
	scanf("%d",&weeknum);
	if(weeknum==1)
	{
	printf("Monday\n");
	}
	else if(weeknum==2)
        {
        printf("Tuesday\n");
        }
	else if(weeknum==3)
        {
        printf("Wednesday\n");
        }
	else if(weeknum==4)
        {
        printf("Thursday\n");
        }
	else if(weeknum==5)
        {
        printf("Friday\n");
        }
	else if(weeknum==6)
        {
        printf("Saturday\n");
        }
	else if(weeknum==7)
        {
        printf("Sunday\n");
        }
	else
	{	
	printf("invalid input\n");
	}
}
