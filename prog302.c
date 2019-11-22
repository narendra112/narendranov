//Write a C program to find all prime numbers between given interval using functions.
#include<stdio.h>
int prime(int lower,int higher);
void main()
{
	int lower,higher,flag,i;
	printf("Enter lower and upper limit\n");
	scanf("%d %d",&lower,&higher);
	for(i=lower;i<=higher;i++)
	{
		flag=prime(lower,higher);
		if(flag==0)
			printf("%d\t",i);
	}
}
int prime(int lower,int higher)
{
	int i,flag=0;
	for(i=lower;i<=higher/2;i++)
	{
		if(lower%i==0)
			flag=1;
		break;
	}

return flag;
}
