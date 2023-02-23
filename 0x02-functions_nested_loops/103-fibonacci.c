#include <stdio.h>

/**
 * main - program generated by adding the previous two terms
 * Return: 0 Success
 */

int main(void)
{
	int prev = 1, curr = 2, next, sum = 2;

	while (curr <= 4000000)
	{
		next = prev + curr;
		prev = curr;
		curr = next;
		if (curr % 2 == 0)
		{
			sum += curr;
		}
	}
	printf("%d\n", sum);

	return (0);
}
