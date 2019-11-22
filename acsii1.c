#include<stdio.h>
void main()
{
	char a;
	for(a=65;a<=122;a++)
	{
	if(a>=90 && a<=97)
	{
	continue;
	}
	printf("|%3d - %c",a,a);
	}
	printf("\n|");
}
