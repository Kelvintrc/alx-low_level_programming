#include "main.h"

/**
 * print_numbers - prints the numbers from 0 to 9
 * followed by a new line
 */

void print_numbers(void)
{
	char ch;

	ch = '0';

	while (ch <= '9')
	{
		_putchar(ch);
		ch++;
	}

	_putchar('\n');
}
