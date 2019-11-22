//Write a C program to check whether a number is prime, Armstrong or perfect number using functions.
#include<stdio.h>
#include<math.h>
int prime(int a);
int arm(int a);
int perfect(int a);
void main()
{
	int a;
	printf("Enter any number");
	scanf("%d",&a);
	prime(a);
/*	if(prime(a))
	{
		printf("Given no is prime\n");
	}
	else
		printf("Given no is not prime\n");*/
	if (arm(a))
		printf("Given number is armstrong number\n");
	else
		printf("Given number is not armstrong number\n");
	if(perfect(a))
		printf("Given number is perfect number\n");
	else
		printf("Given number is not perfect number\n");
}

int prime(int a)
{
	int i,flag=1;
	for(i=2;i<a/2;i++)
	{
		if(a%i==0)
		{
			flag=0;
		}
	}
	if(flag==1)
		printf("Prime\n");
	else
		printf("Not prime\n");

}
int arm(int a)
{
	int digit,sum,temp,last;
	temp=a;
	digit=(int)log10(a)+1;
	while(a!=0)
	{
		last=a%10;
		sum=sum+round(pow(last,digit));
		a=a/10;
	}
	return (temp==sum);
}
int perfect(int a)
{
	int i,sum=0,n;
	n=a;
	for(i=1;i<a;i++)
	{
		if(n%i==0)
			sum+=i;
	}
	return (sum==n);
}
