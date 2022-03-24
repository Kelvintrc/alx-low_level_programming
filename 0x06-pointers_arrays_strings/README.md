# 0x06. C - More pointers, arrays and strings

		Tasks:

0. strcat - concatenates two strings using the prototype: char *_strcat(char *dest, char *src). The function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte. Then, returns a pointer to the resulting string dest.
1. strncat - concatenates two strings using prototype: char *_strncat(char *dest, *src, int n) and returns a pointer to the resulting string dest.
2. strncpy - Prototype: char *_strncpy(char *dest, char *src, int n) function, copies a string.
3. strcmp - compares two strings using Prototype: int _strcmp(char *s1, char *s2)
4. I am a kind of paranoid in reverse. I suspect people of plotting to make me happy - Prototype: void reverse_array(int *a, int n) reverses the content of an array of integers. where n is the number of elements of the array.
5. Always look up - Prototype: char *string_toupper(char *) changes all lowercase letters of a string to uppercase.
6. Expect the best. Prepare for the worst. Capitalize on what comes - Prototype: char *cap_string(char *) capitalizes all words of a string. Taking into account Separators of words: space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }
7. Mozart composed his music not for the elite, but for everybody
mandatory - Prototype: char *leet(char *) encodes a string into 1317:

	-Letters a and A should be replaced by 4

	-Letters e and E should be replaced by 3

	-Letters o and O should be replaced by 0

	-Letters t and T should be replaced by 7

	-Letters l and L should be replaced by 1

	-You can only use one if in your code

	-You can only use two loops in your code

	-You are not allowed to use switch

	-You are not allowed to use any ternary operation

8. rot13 - Prototype: char *rot13(char *) encodes a string using rot13:

	-Can only use if statement once in your code
	
	-Can only use two loops in the code

	-Not allowed to use switch

	-Not allowed to use any tenary operation

9. Numbers have a life; they're not just symbols on paper - Prototype: void print_number(int n) prints an integer:

	-Can only use _putchar function to print

	-Not allowed to use long

	-Not allowed to use arrays or pointers

	-Not allowed to hard-code special values
10. A dream doesn't become reality through magic; it takes sweat, determination and hard work - Given pre-written code we add a line of code at line 19 so that the program prints a[2] = 98, followed by a new line.
11. It is the addition of strangeness to beauty that constitutes the romantic character in art - Prototype: char *infinite_add(char *n1, char *n2, char *r, int size_r) adds two numbers:


	-Where n1 and n2 are the two numbers
	

	-r is the buffer that the function will use to store the result


	-size_r is the buffer size


	-The function returns a pointer to the result


	-You can assume that you will always get positive numbers, or 0


	-You can assume that there will be only digits in the strings n1 and n2


	-n1 and n2 will never be empty


	-If the result can not be stored in r the function must return 0


12. Noise is a buffer, more effective than cubicles or booth walls - Prototype: void print_buffer(char *b, int size); prints a buffer:


	-The function must print the content of size bytes of the buffer pointed by b


	-The output should print 10 bytes per line


	-Each line starts with the position of the first byte of the line in hexadecimal (8 chars), starting with 0


	-Each line shows the hexadecimal content (2 chars) of the buffer, 2 bytes at a time, separated by a space


	-Each line shows the content of the buffer. If the byte is a printable character, print the letter, if not, print .


	-Each line ends with a new line \n


	-If size is 0 or less, the output should be a new line only \n


	-You are allowed to use the standard library
