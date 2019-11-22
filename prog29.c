//Write a C program to input month number and print number of days in that month//
#include<stdio.h>
void main()
{
	int month;
	printf("enter month number\n");
	scanf("%d",&month);
	if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
	{
	printf("31days\n");
	}
	else if(month==2)
        {
        printf("28days\n");
        }
	else if(month==4||month==6||month==9||month==11)
        {
        printf("30days\n");
        }
	else
	{
	printf("invalid input\n");
	}
}
