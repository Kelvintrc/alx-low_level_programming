#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: the string to be checked
 * Return: returns 0,
 * else returns the number of bytes in the string
 * being pointed to by s
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
