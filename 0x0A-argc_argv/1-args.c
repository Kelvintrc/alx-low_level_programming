#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * followed by a new line
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
