#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string to be compared to s2
 * @s2: string to be compared to s1
 * Return: returns the result of comparison
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
