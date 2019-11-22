#include<stdio.h>
int sum(int x,int y);
void main()
{
int a=10,b=10,s;
s=sum(a,b);
printf("sum=%d\n",s);
s=sum(4,5);
printf("%d\n",s);
s=sum(a+b,b*2);
printf("%d\n",s);
}
int sum(int x,int y)
{
int s;
s=x+y;
return s;
}
