#include<stdio.h>
void main()
{
	int i,j;
for(i=1;i<=9;i++)
{
for(j=1;j<=9;j++)
{
if(i==j||j==9+1-i)
printf("*");
else
printf(" ");
}
printf("\n");
}
}
