#include<stdio.h>
void main()
{
	int d1,d2,a,pos1,pos2,k;
	printf("Enter number\n");
	scanf("%d",&a);
	printf("Enter 2 position\n");
	scanf("%d %d",&pos1,&pos2);
	d1=(a>>pos1)&0X01;
	d2=(a>>pos2)&0X01;
	if(d1==d2)
	{
		printf("%d are same\n",a);
	}
	else
	{
	k=(a^(1<<pos1 | 1<<pos2));
		printf("%d\n",k);	
	}
}
