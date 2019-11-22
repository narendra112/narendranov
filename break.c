#include<stdio.h>
void main()
{
	int i,sum=0;
	for(i=1;i<=100;i++)

	sum=sum+i;
	if(i<=10)
	{
	goto add;
	}
	add:
	printf("%d\n",sum);	

}
