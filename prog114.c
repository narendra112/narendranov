//C program to toggle nth bit of a number.
#include<stdio.h>
void main()
{
	int num,n,toggle;
	printf("Enter any number\n");
	scanf("%d",&num);
	printf("Enter which bit to toggle\n");
	scanf("%d",&n);
	toggle=num^(0x01<<n);
	printf("number after toggle=%d\n",toggle);
}
