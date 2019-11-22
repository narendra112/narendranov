#include<stdio.h>
void main()
{
	long long x,n,rev=0,y;
	printf("Enter any numer:\n");
	scanf("%lld",&n);
	y=n;
	while(n>0)
	{
		x=n%10; // n is vanishing so taken a variable y as a reference to compare the results with variable rev 
		rev=10*rev+x;
		n=n/10;
	}
	if(rev==y)
		printf("%lld is palindrome\n",rev);
	else
		printf("not palidrome");
}
