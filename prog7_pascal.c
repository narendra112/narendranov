#include<stdio.h>
void main()
{
	int i,j,pas=1;
	for(i=0;i<=6;i++)
	{
	for(j=1;j<=(6-i);j++)
	{
	printf(" ");
	}
	for(j=0;j<=i;j++)
	{
	if(j==0||i==0)
	pas=1;
	else
	
	pas=(pas*(i-j+1))/j;
	printf("%3d",pas);
	
	}
	printf("\n");
	}
}
	
	

