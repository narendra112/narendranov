//write a c program to find given number is equal//
#include<stdio.h>
void main()
{
	int a,b;
	printf("enter 2 number\n");	
	scanf("%d %d",&a,&b);
	if(a==b)
	{
	printf("%d==%d\n",a,b);
	}
	else
        {
        printf("%d value is not equal %d\n",a,b);
	}
}
