#include <stdio.h>
#include <math.h>

int main(void) {

	int num, last, first, temp, swap, count = 0;

	printf("Enter any number: ");
	scanf("%d", &num);

	temp = num;
	last = temp % 10;
	count = (int)log10(temp);
	printf("count=%d\n",count);
	while(temp>=10)
	{
		temp /= 10;
	}
	first = temp;
	swap = (last * pow(10, count) + first) + (num - (first * pow(10, count) + last));

	printf("Last Digit: %d\n", last);

	printf("First Digit: %d\n", first);

	printf("%d is swapped to %d\n", num, swap);
	return 0;
}
