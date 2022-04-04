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
