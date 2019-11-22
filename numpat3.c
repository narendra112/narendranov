/*
1
24
135
2468
13579*/
#include<stdio.h>
void main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
	if(i & 1)
	k=1;
	else
	k=2;
	for(j=1;j<=i;j++,k+=2)
	{
	printf("%d",k);
	}
	printf("\n");
	}
}
