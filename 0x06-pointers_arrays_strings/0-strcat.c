#include "main.h"

/**
 * _strcat - appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte
 * @dest: string which src is appended to
 * @src: sting to be appended to dest
 * Return: returns a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int length, j;

	/* store length of dest in the length variable*/
	length = 0;
	while (dest[length] != '\0')
	{
		++length;
	}

	/*concatenate src to dest*/
	for (j = 0; src[j] != '\0'; ++j, ++length)
	{
		dest[length] = src[j];
	}

	/*terminating the dest string*/
	dest[length] = '\0';

	return (dest);
}
