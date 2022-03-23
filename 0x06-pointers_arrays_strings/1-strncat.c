#include "main.h"

/**
 * _strncat - concatenates two strings
 * using at most n bytes from src
 *
 * @dest: the string where we want to append
 * @src: the string from which 'n' characters
 * are going to append
 * @n: represents the maximum number of characters
 * to be appended 
 * Return: returns a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len, i;

	/*store length of dest in the dest_len variable*/
	dest_len = 0;
	while (dest[dest_len] != '\0')
	{
		++dest_len;
	}

	/*concatenate src to dest considering n to have
	 *the max number of characters of src to be appended*/
	for (i = 0; i < n && src[i] != '\0'; ++i, ++dest_len)
	{
		dest[dest_len] = src[i];
	}

	/*terminating the dest string*/
	dest[dest_len] = '\0';

	return (dest);
}
