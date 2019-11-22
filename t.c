#include<stdio.h>
void main()
{
        int i,j,k;
        for(i=1;i<=5;i++)
        {
        for(j=1;j<i;j++)
        {
        printf(" ");
        }
        for(k=1;k<=5;k++)
        {
        if(i==1||i==5||j==1||j==5)
        {
        printf("*");
        }
        else
        {
        printf(" ");
        }
        }
        printf("\n");
        }

}
