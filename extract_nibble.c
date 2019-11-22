#include<stdio.h>
void main()
{
	int a,pos1,pos2,k,k2,pos3,pos4,k3,k4;
	printf("Enter any number\n");
	scanf("%d",&a);
	printf("Enter 4 position\n");
	scanf("%d%d%d%d",&pos1,&pos2,&pos3,&pos4);
	k=((a>>pos1)&0x01);
	k2=((a>>pos2)&0x01);
	k3=((a>>pos3)&0x01);
	k4=((a>>pos4)&0x01);
	printf("after swapping=%d\t%d\t%d\t%d\n",k,k2,k3,k4);
}

