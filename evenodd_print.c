#include<stdio.h>
void main()
{
	int a[100],i,even[100],odd[100],j=0,k=0;
	printf("enter 10 values:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		if(a[i]%2==0)
		{
			even[j]=a[i];
			j++;
		}
		else
		{
			odd[k]=a[i];
			k++;
		}
	}
        printf("The elements of odd are \n");

        for (i = 0; i < k; i++)

        {

            printf("%d\t", odd[i]);

        }

 

        printf("\nThe elements of even are \n");

        for (i = 0; i < j; i++)

        {

            printf("%d\t", even[i]);

        }

 

    }
