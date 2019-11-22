/*
1
01
010
1010
10101
*/
#include<stdio.h>
void main()
{
        int i,j,k;
        for(i=1;i<=5;i++)
        {
        for(j=1;j<=i;j++)
        {
        if(k%2==0)
        {
        printf("1");
        }
        else
        {
        printf("0");
        }
	k++;
        }
        printf("\n");
        }
}

