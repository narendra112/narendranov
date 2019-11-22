#include<stdio.h>
int palin(int num);
void main()
{
	int num;
	palin(num);
}
int palin(int num)
{
	int rev=0,rem,i,temp;
	printf("Enter any number to find palindrome\n");
	scanf("%d",&num);
	temp=num;
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num/=10;
	}
	if(rev==temp)
	printf("palindrome\n");
	else
	printf("Not a palindrome\n");
}
