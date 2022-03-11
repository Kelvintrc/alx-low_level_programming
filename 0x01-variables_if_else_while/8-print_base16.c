#include <stdio.h>
/**
 *main - contains the code for program execution
 *
 *Return: returns 0 (Success), otherwise non-zero
 */

int main(void)
{
	int i;
	char ch;

	i = 48;
	ch = 'a';

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
