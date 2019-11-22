//Write a C program to print all armstrong numbers between given interval using functions.
#include<stdio.h>
void armstrong(int start,int end);
int arm(int num);
void main()
{
	int start,end;
	printf("Enter limits to find armstrong number\n");
	scanf("%d %d",&start,&end);
	printf("Armstrong numbers are=");
	armstrong(start,end);
}

int arm(int num)
{
	int temp,sum=0,last;
	temp=num;
	while(temp!=0)
	{
		last=temp%10;
		sum=sum+last*last*last;
		temp/=10;
	}
	if(num==sum)
		return 1;
	else
		return 0;
}

void armstrong(int start,int end)
{
	while(start<=end)
	{
		if(arm(start))
		{
			printf("%d\t",start);
		}
		start++;
	}
}
