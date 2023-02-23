#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
int i, count = 50;
long fib1 = 0, fib2 = 1, fib_next;

for (i = 0; i < count; i++)
{
	if (i <= 1)
		fib_next = i;
	else
		{
			fib_next = fib1 + fib2;
			fib1 = fib2;
			fib2 = fib_next;
		}
		printf("%ld", fib_next);
		if (i != count - 1)
		printf(", ");
	}
	printf("\n");
	return (0);
}

