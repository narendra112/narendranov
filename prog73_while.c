#include<stdio.h>
void main()
{
int power=0,a,b,i=1;
printf("enter any value to find power of given number\n");
scanf("%d %d",&a,&b);
while(i<=b)
{
power+=a;
i++;
}
printf("power of number=%d\n",power);
}
