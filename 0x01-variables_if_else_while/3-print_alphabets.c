#include <stdio.h>
/**
 *main - contains the code for program execution
 *
 *Return: returns 0 (Success), otherwise non-zero
 */

int main(void)
{
	char ch[] = {'a', 'A'};

	while (ch[0] <= 'z')
	{
		putchar(ch[0]);
		ch[0]++;
	}

	while (ch[1] <= 'Z')
	{
		putchar(ch[1]);
		ch[1]++;
	}
	putchar('\n');
	return (0);
}
