#include<stdio.h>
void main()
{
 	int month_no;
	printf("enter month between 1-12\n");
	scanf("%d",&month_no);
	switch(month_no)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
	printf("31 days\n");
	break;
	case 2 :
	printf("28 days\n");
	break;
	case 4:
	case 6:
	case 9:
	case 11:
	printf("30 days\n");
	break;
	default :
	printf("enter valid input\n");
	}
}
