# 0x05. C - Pointers, arrays and strings

		Tasks:

0. 98 Battery st. - Prototype: void reset_to_98(int *n) takes a pointer to an int as parameter and updates the value it points to to 98.
1. Don't swap horses in crossing a stream - swaps the values of two integers using Prototype: void swap_int(int *a, int *b)
2. This report, by its very length, defends itself against the risk of being read - returns the length of a string using Prototype: int _strlen(char *s)
3. I do not fear computers. I fear the lack of them - void_puts(char *str) function prints a string, followed by a new line, to stdout.
4. I can only go one way. I've not got a reverse gear - Prototype: void print_rev(char *s) prints a string, in reverse, followed by a new line.
5. A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes - Prototype: void rev_string(char *s) reverses a string.
6. Half the lies they tell about me aren't true - Prototype: void puts2(char *str) prints every other character of a string, starting with the first character, followed by a new line.
7. Winning is only half of it. Having fun is the other half - Prototype: void puts_half(char *str) prints half of a string, followed by a new line. Prints the second half of the string. If the number of characters is odd, the function prints the last n characters of the string, where n = (length_of_the_string - 1) / 2
8. Arrays are not pointers - Prototype: void print_array(int *a, int n) prints n elements of an array of integers followed by a new line.
9. strcpy - Prototype: char *_strcpy(char *dest, char *src) copies the string pointed to by src, including the terminating null byte(\0), to the buffer pointed to by dest. Return value is the pointer to dest.
10. Great leaders are willing to sacrifice the numbers to save the people. Poor leaders sacrifice the people to save the numbers - Prototype: int _atoi(char *s) converts a string to an integer:

	-The number in the string can be preceded by an infinite number of characters.

	-It takes into account all the - and + signs before the number

	-If there are no numbers in the string, the function must return 0

	-Not allowed to use long

	-Not allowed to declare new variables of "type" array

	-Not allowed to hard-code special values

	- '-fsanitize=signed-integer-overflow' gcc flag is used to compile the code

11. Don't hate the hacker, hate the code - generates random valid passwords for the program 101-crackme:

	-Allowed to use standard library
