#include<stdio.h>
#include<stdlib.h>
int main()
{
int marks;
printf("marks\n");
scanf("%d",&marks);
switch(marks)
{
case 90:
printf("excellent\n");
break;
case 85:
case 84:
case 83:
case 82:
printf("very good\n");
break;
case 60:
printf("good\n");
break;
case 40:
printf("ok\n");
break;
default:
printf("result not available");
}
}
