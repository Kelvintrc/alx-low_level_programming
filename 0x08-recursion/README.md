# 0x08. C - Recursion

		Tasks:

0. She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget - prints a string, followed by a new line using Prototype: void _puts_recursion(char *s);
1. Why is it so important to dream? Because, in my dreams we are together - Prototype: void _print_rev_recursion(char *s); prints a string in reverse.
2. Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange - Prototype: int _strlen_recursion(char *s); returns the length of a string.
3. You mustn't be afraid to dream a little bigger, darling - Prototype: int factorial(int n); returns the factorial of a given mumber:

	-If n is lower than 0, the function should return -1 to indicate an error

	-Factorial of 0 is 1

4. Once an idea has taken hold of the brain it's almost impossible to eradicate - Prototype: int _pow_recursion(int x, int y); returns the value of x raised to the power of y. If y is lower than 0, the funcion returns -1.
5. Your subconscious is looking for the dreamer - Prototype: int _sqrt_recursion(int n); returns the natural square root of a number. If n does not have a natural square root, the function returns -1.
6. Inception. Is it possible? - Prototype: int is_prime_number(int n); returns 1 if the input integer is a prime number, otherwise return 0.
7. They say we only use a fraction of our brain's true potential. Now that's when we're awake. When we're asleep, we can do almost anything - Prototype: int is_palindrome(char *s); returns 1 if a string is a palindrome and 0 if not. An empty string is a palindrome.
8. Inception. Now, before you bother telling me it's impossible... - Prototype: int wildcmp(char *s1, char *s2); compares two strings and returns 1 if the strings can be considered identical, otherwise return 0:

	-s2 can contain the special character *.

	-The special char * can replace any string (including an empty string)
