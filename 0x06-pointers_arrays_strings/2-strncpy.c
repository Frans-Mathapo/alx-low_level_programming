#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 * @n: Maximum number of bytes to be copied from src
 *
 * Return: Pointer to the copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[j] = src[j];

	for (; j < n; j++)
		dest[j] = '\0';

	return (dest);
}
