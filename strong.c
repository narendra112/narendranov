#include<stdio.h>
#include<math.h>
void main()
{
	int n,digit,sum=0,d,temp; 
	printf("enter any number\n");
	scanf("%d",&n);	
	digit=log10(n)+1;
	temp=n;
	while(n!=0)
	{
	d=n%10;
	sum=sum+pow(d,digit);
	n/=10;
	}
	if(sum==temp)
	{
	printf("armstrong no\n");
	}
	else
	printf("not armstrong no\n");
	
}
