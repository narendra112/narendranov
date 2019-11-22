#include<stdio.h>
int display(int x,int y);
void main()
{
int a,b;
printf("enter 2 number\n");
scanf("%d %d",&a,&b);
printf("%d",display(a,b));
}
int display(int x,int y)

{
int x,y;
return x>y?x:y;
}
