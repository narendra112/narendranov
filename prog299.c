//Write a C program to find maximum and minimum between two numbers using functions.
#include<stdio.h>
int max(int a,int b);
int min(int a,int b);
void main()
{
	int a,b,mx,mi;
	printf("Enter two numbers\n");
	scanf("%d %d",&a,&b);
	mx=max(a,b);
	mi=min(a,b);
	printf("Maximum=%d\n",mx);
	printf("Minimum=%d\n",mi);
}

int max(int a,int b)
{
	if(a>b)
		return a;
	else
		return b;
}


int min (int a,int b)
{
	if(a<b)
		return a;
	else
		return b;
}
