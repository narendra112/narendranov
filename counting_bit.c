#include<stdio.h>
void main()
{
	int a,i,one=0,zero=0;
	printf("Enter any number\n");
	scanf("%d",&a);
	for(i=7;i>=0;i--)
	{
		if(a&(0x01<<7-i))
		{
			one++;
		}
		else
		{
			zero++;
		}
	}
	printf("Ones=%d\n",one);
	printf("Zero=%d\n",zero);
}

