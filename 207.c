#include<stdio.h>
void main()
{
	int i,j,n1,n2;
	printf("enter n\n");
	scanf("%d %d",&n1,&n2);
for(i=1;i<n1;i++)
{
for(j=1;j<n2;j++)
{
if(i==n1/2||j==n2/2)
printf("+");
else
printf(" ");
}
printf("\n");
}
}
