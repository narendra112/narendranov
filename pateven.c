/*
0
22
444
6666
88888
*/#include<stdio.h>
void main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
	for(j=1;j<=i;j++)
	{
//for even
	k=2*i-2;
// for odd k=2*i-1;
	printf("%d",k);
	}
	printf("\n");
	}
}
