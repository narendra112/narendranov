//Write a C program to enter any number and print its reverse. using for loop
#include<stdio.h>
void main()
{
int i,n,rev=0,rem;
printf("enter any value\n");
scanf("%d",&n);
for(i=0;n>0;)
{
rem=n%10;
rev=rev*10+rem;
n/=10;
}
printf("reversed=%d\n",rev);
}
	
