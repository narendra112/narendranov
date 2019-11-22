#include<stdio.h>
void main()
{
	int a=10;
//	volatile int a=10;
	printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\n",a,a++,a,++a,a,++a,a++);
}
