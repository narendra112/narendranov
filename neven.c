#include<stdio.h>
void main()
{
	int count,i=1,j,n;
	printf("Enter any value\n");
	scanf("%d",&n);
	while(i!=0)
	{
	if(i%2==0)
	{
	count++;
	printf("%d\t",i);
	}
	if(count==n)
	break;
	i++;
	}
}
