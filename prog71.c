//Write a C program to enter any number and print it in words.
#include<stdio.h>
void main(void)
{
	long int n,rem,num = 0;
	printf("enter any value to print in word\n");
	scanf("%ld",&n);
while(n!=0)
{
rem=n%10;
num=num*10+rem;
n=n/10;
}
while(num!=0)
{
switch(num%10)
{
case 0:
printf("zero\t");
break;
case 1:
printf("one\t");
break;
case 2:
printf("two\t");
break;
case 3:
printf("three\t");
break;
case 4:
printf("four\t");
break;
case 5:
printf("five\t");
break;
case 6:
printf("six\t");
break;
case 7:
printf("seven\t");
break;
case 8:
printf("eight\t");
break;
case 9:
printf("nine");
break;
}
num=num/10;
}
}

