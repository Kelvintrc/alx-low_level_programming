#include <stdio.h>
/**
 *main - contains the code for program execution
 *
 *Return: returns 0 (Success), otherwise non-zero
 */

int main(void)
{
	int i;

	i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
		if (i != 58)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
