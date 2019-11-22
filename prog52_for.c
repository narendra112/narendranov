//Write a C program to print all natural numbers in reverse (from n to 1). - using for loop
#include<stdio.h>
void main()
{
int i,n;
printf("enter n value\n");
scanf("%d",&n);
for(i=n;i>=1;i--)
{
printf("%d\n",i);
}
}
