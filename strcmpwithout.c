#include<stdio.h>
#include<string.h>
int main()
{
char a[100],b[100];
printf("Enter two strings\n");
scanf("%s%s",a,b);
if(strcmp(a,b)==0)
{
printf("strings are same\n");
return 0;
}
printf("strings are different\n");
}
