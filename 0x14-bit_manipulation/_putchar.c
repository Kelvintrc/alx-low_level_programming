#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to be written
 *
 * Return: On success 1,
 * On error -1 and errno is set approprietely
 */

int _putchar(char c)
{
	return (write (1, &c, 1));
}
