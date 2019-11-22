#include<stdio.h>
void main()
{
	int n,t1=0,t2=1,fib=0;
	printf("enter any number\n");
	scanf("%d",&n);
	fib=t1+t2;
	printf("fibnocassi series=");
	printf("%d	%d	",t1,t2);
	while(fib<=n)
	{
		printf("%d\t",fib);

		t1=t2;
		t2=fib;
		fib=t1+t2;
	}

}
