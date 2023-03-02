#include "main.h"
/**
 * leet - encode string to 1337
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
	int i, j;
	char inp1[] = "aAeEoOtTlL";
	char inp2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == inp1[j])
			{
				n[i] = inp2[j];
			}
		}
	}
	return (n);
}
