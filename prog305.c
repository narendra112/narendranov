//Write a C program to print all perfect numbers between given interval using functions.
#include<stdio.h>
int per(int num);
void perfect(int start,int stop);
void main()
{
	int start,stop;
	printf("Enter limits to find perfect numbers\n");
	scanf("%d %d",&start,&stop);
	printf("Numbers entered: %d\t%d\n",start,stop);
	perfect(start,stop);
}

int per(int num)
{
	int sum=0,i;
	for(i=1;i<num;i++)
	{
		if(num%i==0)
		{
			sum+=i;
		}
	}
	if(num==sum)
		return 1;
	else
		return 0;
}

void perfect(int start,int stop)
{
	while(start<stop)
	{
		if(per(start))
		{
			printf("%d\n",start);
		}
		start++;
	}
}
