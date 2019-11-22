#include <stdio.h>

#define MAX_SIZE 100 // Maximum array size

int main()
{
	int arr[MAX_SIZE]; // Declare array of MAX_SIZE
	int i, N;

	/* Input size of the array */
	printf("Enter size of the array : ");
	scanf("%d", &N);

	/* Input elements in the array */
	printf("Enter elements in array : ");
	for(i=0; i<N; i++)
	{
		scanf("%d", &arr[i]);
	}

	printf("\nAll negative elements in array are : ");
	for(i=0; i<N; i++)
	{
		/* If current array element is negative */
		if(arr[i] < 0)
		{
			printf("%d\t", arr[i]);
		}
	}

	return 0;
}
