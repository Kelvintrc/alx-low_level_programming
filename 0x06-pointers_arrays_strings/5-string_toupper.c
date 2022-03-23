#include "main.h"

/**
 * string_toupper - changes all lowercase letters
 * of a string to uppercase
 * @s: string to be changed to uppercase
 * Return: returns s
 */

char *string_toupper(char *s)
{
	int i = 0;

	/*iterate loop until end of string*/
	while (s[i] != '\0')
	{
		/**
		 * All lowercase characters ASCII value
		 * is from 97 to 122 and if we subtract 32
		 * in each lowercase character only then
		 * it will become uppercase character
		 */
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}

		/*increase iterator variable*/
		i++;
	}

	return (s);
}
