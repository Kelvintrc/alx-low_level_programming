#include "main.h"

/**
 * print_most_numbers - prints the numbers from 0 to 9
 * followed by a new line
 */

void print_most_numbers(void)
{
	char ch;

	ch = '0';

	while (ch <= '9')
	{
		if (ch != '2' && ch != '4')
		{
			_putchar(ch);
		}

		ch++;
	}

	_putchar('\n');
}
