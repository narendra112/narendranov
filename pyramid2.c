#include<stdio.h>
void main()
{
	int i,j;
	char ch;
for(i=1;i<=5;i++)
{
ch='A';
for(j=i;j<=5;j++)
{
printf("%c",ch++);
	}
for(j=1;j<i*2-1;j++)
printf(" ");
for(i=5;i>=1;i--)
{
ch='D';
for(j=ch;j<=i;j++)
{
printf("%c",ch++);
}
printf("\n");
}
}
}

