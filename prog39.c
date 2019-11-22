//Write a C program to print day of week name using switch case
#include<stdio.h>
int main()
{
	int week;
	printf("enter any no of week\n");
	scanf("%d",&week);
	switch(week)
	{
	case 1:
	printf("Monday\n");
	break;
	case 2:
	printf("Tuesday\n");
	break;
	case 3:
	printf("Wednesday\n");
	break;
	case 4:
	printf("Thursday\n");
	break;
	case 5:
	printf("Friday\n");
	case 6:
	printf("Saturday\n");
	break;
	printf("Sunday\n");
	default:
	printf("Invalid input\n ");
}
}
