#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - Contains the code for program execution
*Return: Returns the value 0 for success, otherwise non-zero
*/

int main(void)
{
	int n;

	int last_digit;

	srand(time(NULL)); /*Initialization, should only be called once.*/

	n = rand() - RAND_MAX / 2;

	last_digit = n % 10;

	if (last_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	} else if (last_digit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	} else if (last_digit < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not o\n",
				n, last_digit);
	}
	return (0);
}
