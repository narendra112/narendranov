#include<stdio.h>
#include<string.h>
void main()
{
int i,count=0,j=0;
char str[100],rev[100];
printf("Enter any string\n");
gets(str);
for(i=strlen(str)-1;i>=0;i--)
{
rev[j]=str[i];
j++;
count++;
}
printf("Reverse of an string=%s\n",rev);
printf("Count of string=%d\n",count);
}
