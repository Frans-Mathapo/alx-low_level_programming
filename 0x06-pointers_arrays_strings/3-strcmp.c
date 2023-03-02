#include "main.h"

/**
 * _strcmp - Compare string values
 * @s1: Pointer to the first string
 * @s2: Pointer to the second string
 *
 * Return: The difference between the ASCII values of the first non-matching characters
 */
int _strcmp(char *s1, char *s2)
{
    int i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}

	return (s1[i] - s2[i]);
}
