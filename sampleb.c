//to find biggest number of given 3 number//
#include<stdio.h>
int main()
{
  	int a,b,c;
	printf("enter the biggest number\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
	if (a>c)
	{
	printf("%d is biggest number\n",a);
	}
	else 
	{
	printf("%d is biggest\n",c);
	}
	}
	else if(b>c) 
	{
	printf("%d is biggest\n",b);
	}
	else
	{
	printf("%d is biggest\n",c);
	}
}
