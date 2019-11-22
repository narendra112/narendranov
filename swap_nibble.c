#include<stdio.h>
void main()
{
	int num,k1,k2,k3;
	printf("Enter any number\n");
	scanf("%x",&num);
	k1=(num&0x0ff0);
	k2=(((num&0x000f)<<12)|((num&0xf000)>>12));
	k3=(k1|k2);
	printf("After swapping=%x\n",k3);
}
