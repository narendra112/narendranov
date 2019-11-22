#include<stdio.h>
int main (void)
{
int *ptr;
int a=95;
ptr=&a;
printf("%p\n",&ptr);
printf("%d\n",*ptr);
}
