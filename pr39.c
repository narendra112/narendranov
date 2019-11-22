#include<stdio.h>
void main()
{
	int a;
	printf("enter any number 1-7 to print particular week\n");
	scanf("%d",&a);
	switch(a)
	{
	case 1:
	printf("mon\n");
	break;
	case 2:
	printf("tue\n");
	break;
	case 3:
	printf("wed\n");
	break;
	case 4:
	printf("thu\n");
	break;
	case 5:
	printf("fri\n");
	break;
	case 6:
	printf("sat\n");
	break;
	case 7:
	printf("sun\n");
	break;
	default:
	printf("invalid input\n");
	}
}

