#include<stdio.h>
void main()
{
	int n,t1=0,t2=1,fib=0,i;
	printf("enter any number\n");
	scanf("%d",&n);
	printf("fibnocassi series=");
	printf("%d	%d	",t1,t2);
	for(i=2;i<n;i++)
	{
	fib=t1+t2;
		printf("%d\t",fib);

		t1=t2;
		t2=fib;
	}

}

