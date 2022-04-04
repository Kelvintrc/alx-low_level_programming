#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array
 * @c: character to be initialized
 * Return: NULL if size is 0,
 * a pointer to the array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *cr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	cr = malloc(size * sizeof(c));

	if (cr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		cr[i] = c;
	}

	return (cr);
}
