//Write a C program to count number of digits in any number. using for loop
#include<stdio.h>
void main()
{
	long int i,n;
	printf("enter any value\n");
	scanf("%ld",&n);
	for(i=0;n!=0;n/=10)
	{
		i++;
	}
	printf("%ld\n",i);

}
