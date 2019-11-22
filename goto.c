#include <stdio.h>

#define MAX 10

int main()
{
	int i, j;
	for(i = 0; i < MAX;i++)
	{
		for(j = 0; j < MAX; j++)
		{
	goto stop;
		printf("%d\n",j);
		}

	}

stop:;
     return 0;
}
