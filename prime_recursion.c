#include<stdio.h>
int prime(int n,int i);
void main(void)
{
	int n,p;
	printf("Enter any number\n");
	scanf("%d",&n);
	p=prime(n,2);
	if(p==55)
		printf("not prime\n");
	else
		printf("prime\n");
}
int prime(int n,int i)
{
	static int temp=0; 
	if(i < n)
	{
			temp = n%i;
			if(temp == 0)
			return 55;
			
	}
	else if (i >= n)
		return -1;
	else
		return (prime(n,i+1));
}
