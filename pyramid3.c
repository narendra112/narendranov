#include<stdio.h>
void main()
{
int i,j;
char ch='A';
for(i=1;i<=5;i++)
{
for(j=i;j<5;j++)
{
printf(" ");
}
for(j=ch;j>='A';j--)
{
printf("%c",j);
}
for(j='B';j<=ch;j++)
printf("%c",j);
printf("\n");
ch++;
}
}
