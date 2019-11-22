//Write a C program to print all Perfect numbers between 1 to n.
#include<stdio.h>
void main()
{
        int j,n,i,sum;
        printf("enter any number\n");
        scanf("%d",&n);
	printf("perfect numbers are:");
        for(i=1;i<n;i++)
        {
	sum=0;
	for(j=1;j<i;j++)
	{
        if(i%j==0)
        {
        sum+=j;
        }
        }
        if(j==sum)
        {
        printf("%d\t",i);
        }
	}
}       
