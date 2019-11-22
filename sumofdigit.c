#include<stdio.h>
void main()
{
	int sum=0,n,remainder;
	printf("Enter any digit\n");
	scanf("%d",&n);
	while(n>0)
	{
	remainder=n%10;
	sum+=remainder;
	n/=10;
	}
	printf("Sum of digit=%d\n",sum);
}
