#include<stdio.h>
void main()
{
	int last,first,swap,n,temp;
	printf("Enter any number\n");
	scanf("%d",&n);
	temp=n;
	last=n%10;
	while(n>0)
	{
		first/=10;
		swap=first;
		last=first;
		first=last;
		n/=10;
	}

	printf("%d",swap);
}
