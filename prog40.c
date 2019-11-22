//Write a C program print total number of days in a month using switch case
#include<stdio.h>
void main()
{
 	int month_no;
	printf("enter month between 1-12\n");
	scanf("%d",&month_no);
	switch(month_no)
	{
	case 1:
	printf("January=31 days\n");
	break;
	case 2:
        printf("Febuary=28 days\n");
        break;
	case 3:
        printf("March=31 days\n");
        break;
	case 4:
        printf("April=30 days\n");
        break;
	case 5:
        printf("May=31 days\n");
        break;
	case 6:
        printf("June=30 days\n");
        break;
	case 7:
        printf("July=31 days\n");
        break;
	case 8:
        printf("August=31 days\n");
        break;
	case 9:
        printf("September=30 days");
        break;
	case 10:
        printf("October=31 days\n");
	break;
	case 11:
        printf("November=30 days\n");
        break;
	case 12:
        printf("December=31 days");
        break;
	default:
	printf("Invalid input\n");
	}
}
