//Write a C program to find sum of all odd numbers between 1 to n. using while loop
#include<stdio.h>
void main()
{
int i=1,n;
printf("enter n value\n");
scanf("%d",&n);
while(i<=n)
{
printf("%d\n",i);
i+=2;
}
}
