//Write a C program to check whether a number is Armstrong number or not.
#include<stdio.h>
#include<math.h>
void main()
{
	int num,digit,temp,sum=0,d;
	printf("enter any number\n");
	scanf("%d",&num);	
	temp=num;
	digit=log10(num)+1;
	printf("digit=%d\n",digit);
	while(temp!=0)
	{
		d=temp%10;
		sum=sum+(int)(pow(d,digit));
		temp/=10;
//	printf("%d\n",sum);
	}
	if(num==sum)
	{
		printf("%d is armstrong\n",num);
	}
	else
	{
		printf("%d is not armstrong\n",num);
	}
}
