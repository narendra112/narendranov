//Write a C program to find frequency of each digit in a given integer.
#include<stdio.h>
//#define BASE 10
void main()
{
	long long  n,num;
	int i,lastDigit;
	int freq[10];
	printf("enter any number\n");
	scanf("%lld",&num);
	for(i=0;i<10;i++)
	{
	freq[i]=0;
	}
	n=num;
	while(n!=0)
	{
	lastDigit=n%10;
	n/=10;
	freq[lastDigit]++;
	}
	for(i=0;i<10;i++)
	{
	printf("frequency of %d=%d\n",i,freq[i]);
	}
}
