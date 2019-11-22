//Write a C program to find power of any number x ^ y//
#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,c;
	printf("enter two values  to find a^b\n");
	scanf("%d %d",&a,&b);
	c=pow(a,b);
	printf("a^b:%d",c);

}

