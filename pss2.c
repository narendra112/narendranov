#include<stdio.h>
void main()
{
int i=1,j;
while(i<=5)
{
j=i;
while(j<5)
{
printf(" ");
j++;
}
j=1;
while(j<=i)
{
printf("*");
j++;
}
printf(" \n");
i++;
}
i=1;
while(i<5)
{
j=1;
while(j<=i)
{
printf(" ");
j++;
}
j=5;
while(j>i)
{
printf("*");
j--;
}
printf("\n");
i++;
}
}

