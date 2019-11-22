//Write a C program to find LCM of two numbers.
#include<stdio.h>
void main()
{
	int num1,num2,nume,deno,d;
	printf("enter two number\n");
	scanf("%d%d",&num1,&num2);
	if (num1 > num2)
	{
		nume=num1;
		deno=num2;
	}
	else if (num1 < num2)
	{
		nume=num2;
		deno=num1;
	}
	else
		{ 
		printf("the gcd for that two given number is %d\n",num1);
		}
		d=nume%deno;
		while (d != 0)
	{
			nume=deno;
			deno=d;
			d=nume%deno;
	}
	
		printf("the lcm of that given two numbers is %f\n",(float) (num1*num2)/deno);
}
