/* check whether year is leap or not */
#include <stdio.h>
void main()
{
int a;
printf("enter a year\n");
scanf("%d",&a);
if (((a%4 == 0) && (a%100 != 0)) || (a%400 == 0))
{
printf("%d is leap year\n",a);
}
else 
printf("%d is not leap year\n",a);
}
