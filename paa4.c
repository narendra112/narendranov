#include<stdio.h>
void main()
{
int i,j,n; 
printf("enter n value\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=n;j>i;j--)
printf(" ");
for(j=n;j>=i;j--)
printf("*");
printf("\n");
}
for(i=2;i<=n;i++)
{
for(j=1;j<i;j++)
printf(" ");
for(j=1;j<=i;j++)
printf("*");
printf("\n");
}
}
