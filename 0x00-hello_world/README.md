# 0x00. C - Hello, World

	Tasks

0. Preprocessor: The script here runs a C file through the preprocessor and saves the result into another file.

	-The C file name is saved in the variable $CFILE

	-The output is saved in the file c

1. Compiler: The script here compiles a C file but does not link:

	-The C file name is saved in the variable $CFILE

	-The output file is named the same as the C file, but with the extension .o instead of .c eg if the C file is main.c, the output file should be main.o

2. Assembly: The script here generates the assembly code or a C code and saves it in an output file.

	-The C file name is saved in the variable $CFILE

	-The output file is named the same as the C file, but with the extension .s instead of .c eg if the C file is main.c, the output file should be main.s

3. Name: The script here compiles a C file and creates an executable named cisfun:

	-The C file name is saved in the variable $CFILE

4. Hello, puts: This is a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line:

	-We use the function puts

	-Not allowed to use printf

	-The program ends with the value 0

5.Hello, printf: This is a C program that prints exactly with proper grammar, but the outcome is a piece of art, ,followed by a new line:
	-Using the function printf

	-Not allowed to use the function puts

	-Program returns 0

	-The program compiles without warning when using the -Wall gcc option

6. Size is not grandeur, and territory does not make a nation: This is a C program that prints the size of various types on the computer it is compiled and run on e.g The size of int, float char, long int & long long int.

7. Intel: The script here generates the assembly code (Intel syntax) of a C code and save it in an output file:

	-The C file name is saved in the variable $CFILE

	-The output is named the same a the C file, but with extension .s instead of .c eg if the C file is main.c, the output file should be main.s

8. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity: This C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error:

	-Not allowed to use any functions listed in the Name section of the man (3) printf or man (3) puts

	-The program returns 1

	-The program compiles without any warnings when using the -Wall gcc option
