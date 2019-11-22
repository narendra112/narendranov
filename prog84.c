//Write a C program to print all Armstrong numbers between 1 to n.
#include<stdio.h>
#include<math.h>
void main()
{
	int num,dig,sum,i,n,last;
	printf("enter any number to find armstrong numbers\n");
	scanf("\n%d",&num);
	printf("armstrong numbers:");
	for(i=1;i<=num;i++)
	{
	sum=0;
	n=i;
	dig=log10(n)+1;
	while(n!=0)
	{
	last=n%10;
	sum=sum+(pow(last,dig));
	n/=10;
	}
	if(i==sum)
	{
	printf("%d\t",sum);
	}
	}

}
