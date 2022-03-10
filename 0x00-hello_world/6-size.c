#include <stdio.h>
/**
 * main - prints the the sizes of various data types
 *
 * Return: returns 0 if the program exits properly, otherwise non-zero
 */
int main(void)
{
	char charType;
	int intType;
	long longIntType;
       	double longLongIntType;
	float floatType;
	
	//size of data types
	printf("Size of a char: %lu byte\(s)\n", sizeof(charType));
	printf("Size of an int: %lu byte\(s)\n", sizeof(intType)); 
	printf("Size of a long int: %lu byte\(s)\n", sizeof(longIntType)); 
	printf("Size of a long long int: %lu byte\(s)\n", sizeof(longLongIntType)); 
	printf("Size of a float: %lu byte\(s)\n", sizeof(floatType));

	return (0);	
}
