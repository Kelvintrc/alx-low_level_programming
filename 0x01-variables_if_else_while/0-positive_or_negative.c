#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main -
*Return:
*/

int main(void)
{
	int n;

	srand(time(NULL)); /*Initialization, should only be called once.*/

	n = rand() - RAND_MAX / 2;

	if (n > 0) {
		printf("%d is positive\n", n);
	}else if(n == 0) {
		printf("%d is zero\n", n);
	}else if(n < 0) {
		printf("%d is negative\n", n);
	}

	return (0);
}
