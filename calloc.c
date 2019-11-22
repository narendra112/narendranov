#include<stdio.h>
#include<stdlib.h>
typedef unsigned uint_32;
typedef signed short sint_16;
typedef unsigned short uint_16;
typedef unsigned char uint_8;
int main(void)
{
	uint_16 num, *ptr,i,bit;
	sint_16 j;
	printf("enter the size of array:");
	scanf("%hd",&num);
	ptr = (uint_16 *) calloc(num,2);//since 2 bytes for unsigned short
	if(ptr == NULL)
	{
		printf("no memory is allocated for arrays\n");
	}
	else
	{
		printf("the sum of memory is allocated for this application is %hd bytes so please enter the elements for the arrays\n",num*2);
		for(i=0;     i<num;    i++)
		{
			printf("%hx.",i+1);
			scanf("%hx",(ptr+i));
		}
	}

	printf("the array elements in binary coded decimal form\n");
	for(i=0;    i<num;     i++)
	{	printf("%hx-->",*(ptr+i));
		for(j=15;    j>=0;    j--)
		{
			bit = (*(ptr+i) >> j) & 0x01;
			printf("%hx",bit);
			if(j%4 == 0)
				printf(" ");
		}
		printf("\n");
	}
	return 0;

}
