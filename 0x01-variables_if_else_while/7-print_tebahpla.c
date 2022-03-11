#include <stdio.h>
/**
 *main - contains the code for program execution
 *
 *Return: returns 0 (Success), otherwise non-zero
 */

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
