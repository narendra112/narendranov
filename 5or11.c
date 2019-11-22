#include<stdio.h>
void main()
{
 	int num;
	printf("enter the number\n");
	scanf("%d",&num);
	if((num % 11==0) && (num % 5==0))
	{
	printf("number is divisible  by 5 and 11\n");
	}
	else
	{
	printf("number is not divisible by 5 and 11\n");
	}

}
