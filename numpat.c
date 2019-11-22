/*
1
2  6
3  7  10
4  8  11 13
5  9  12 14 15*/
#include<stdio.h>
void main()
{
	int i,j,diff,val;
	for(i=1;i<=5;i++)
	{
	diff=5-1;
	val=i;
	for(j=1;j<=i;j++)
	{
	printf("%3d",val);
	val+=diff;
	diff--;
	}
	printf("\n");
	}
}
