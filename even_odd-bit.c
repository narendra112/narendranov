#include <stdio.h>

int main()
{
	int num;
	printf("Enter any number: ");
	scanf("%d", &num);
	(num&1)?printf("odd\n"):printf("even\n");
}
