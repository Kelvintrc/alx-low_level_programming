# 0x0B. C - malloc, free

		Tasks:

0. Float like a butterfly, sting like a bee - Prototype: char *create_array(unsigned int size, char c); creates an array of chars, and initializes it with a specific char:

	-Returns NULL if size = 0

	-Returns a pointer to the array, or NULL if it fails
1. The woman who has no imagination has no wings - Prototype: char *_strdup(char *str); returns a pointer to a newly allocated space in memory, which contains a copy of the string fiven as a parameter:

	-The _strdup() function returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with malloc, and can be freed with free.

	-Returns NULL if str = NULL

	-On success, the _strdup function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available.

2. He who is not courageous enough to take risks will accomplish nothing in life - Prototype: char *str_concat(char *s1, char *s2); concatenates two strings:

	-The returned pointer points to a newly allocated space in memory which contains the contents of s1, followed by the contents of s2, and null terminated

	-if NULL is passed, it is treated as an empty string

	-The function returns NULL on failure

3. If you even dream of beating me you'd better wake up and apologize - Prototype: int **alloc_grid(int width, int height); returns a pointer to a 2 dimensional array of integers:

	-Each element of the grid is initialized to 0

	-The function returns NULL on failure

	-If width of height is 0 or negative, returns NULL

4. It's not bragging if you can back it up - Prototype: void free_grid(int **grid, int height); frees 2 dimensional grid previously created by alloc_grid function in 3 above.
5. It isn't the mountains ahead to climb that wear you out; it's the pebble in your shoe - Prototype: char *argstostr(int ac, char **av); concatenates all the arguments of your program:

	-Returns NULL if ac == 0 or av == NULL

	-Returns a pointer to a new string, or NULL if it fails

	-Each argument is followed by a \n in the new string
