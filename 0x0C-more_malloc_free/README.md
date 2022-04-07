# 0x0C. C - More malloc, free

		Tasks:
0. Trust no one - Prototype: void *mallocc_checked(unsigned int b); allocates memory using malloc:

	-Returns a pointer to the allocated memory

	-if malloc fails, the malloc_checked function causes normal process termination with a status value of 98

1. string_nconcat - Prototype: char *string_nconcat(char *s1, char *s2, unsigned int n); concatenates two strings:

	-The returned pointer points to a newly allocated space in memory, which contains s1, followed by the first n bytes of s2, and null terminated.

	-If the function fails, it returns NULL

	-If n is greater or equal to the length of s2 then use the entire string s2

	-If NUll is passed, it if treated as an empty string
