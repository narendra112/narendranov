#include<stdio.h>
void main()
{
int t1 = 0, t2 = 1, fib = 0, n;

    printf("Enter a fibnocassi number range: ");
    scanf("%d", &n);
    printf("Fibonacci Series: %d, %d, ", t1, t2);
 fib=t1+t2;

    while(fib <= n)
    {
        printf("%d, ",fib);
        t1 = t2;
        t2 = fib;
	fib = t1 + t2;
        
    }
    
}
