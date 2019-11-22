//Write a C program to check whether a number is even or odd using functions.
#include<stdio.h>
void evenodd();
int main()
{
	evenodd();
}

void evenodd ()
{
	int a;
	printf("Enter any number to check even or odd\n");
        scanf("%d",&a);
	if(a%2==0)
		printf("Given number is Even number=%d\n",a);
	else
		printf("Given number is Odd Number=%d\n",a);
}
