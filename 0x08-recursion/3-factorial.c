#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: the given number
 * Return: Always 0, -1 if n is lower than 0
 * to indicate an error
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1 || n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
