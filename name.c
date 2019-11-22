#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(((i==2)&&(j==2||j==3||j==4||j==5))||((i==4)&&(j==1||j==2||j==3||j==4)))
				printf(" ");
			else
				printf("*");
		}
		for(j=1;j<=2;j++)
			printf(" ");
		for(j=1;j<=5;j++)
		{
			if((i==2||i==3||i==4)&&(j==2||j==3||j==4))
				printf(" ");
			else
				printf("*");
		}
		for(j=1;j<=2;j++)
			printf(" ");
		for(j=1;j<=5;j++)
		{
			if(((i==1)&&(j==2||j==3||j==4))||((i==2)&&(j==3||j==4))||((i==3)&&(j==2||j==4))||((i==4)&&(j==2||j==3))||((i==5)&&(j==2||j==3||j==4)))
				printf(" ");
			else
				printf("*");
		}
		for(j=1;j<=2;j++)
			printf(" ");

		for(j=1;j<=5;j++)
		{
			if((i==4||i==5)&&(j==2||j==3))
				printf("*");
			else
				printf(" ");
		}
	

	printf("\n");
}
}
