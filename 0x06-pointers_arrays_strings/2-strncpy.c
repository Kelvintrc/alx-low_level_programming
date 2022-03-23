#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination file src is copied to
 * @src: source file to be copied to dest
 * @n: number of characters to be copied from src
 * Return: returns dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
