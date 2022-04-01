# 0x0A. C - argc, argv

		Tasks:

0. It ain't what they call you, it's what you answer to - the program prints its name, followed by a new line.

	-If you rename the program, it will print the new name, without having to compile it again

	-You should not remove the path before the name of the program
1. Silence is argument carried out by other means - The program prints the number of arguments passed into it. The program prints a number, followed by a new line.
2. The best argument against democracy is a five-minute conversation with the average voter - the program prints all arguments it receives:

	-All arguments are printed, inluding the first one

	-Only one argument is printed per line, ending with a new line.
3. Neither irony nor sarcasm is argument - the program multiplies two numbers:

	-Prints the result of the multiplication, followed by a new line

	-Assumes that the two numbers and result of the multiplication can be stored in an integer

	-If the program does not receive two arguments, it prints Error, followed by a new line and returns 1.
4. To infinity and beyond - this program adds positive numbers:

	-Prints the result, followed by a new line

	-If no number is passed to the program, prints 0, followed by a new line

	-If one of the number contains symbols that are not digits, prints Error, followed by a new line and returns 1

	-Assumes that numbers and the addition of all the numbers can be stored in an int.
5. Minimal Number of Coins for change  - prints the minimum number of coins to make change for an amount of money:

	-Usage: ./change cents

	-where cents is the amount of cents you need to give back

	-if the number of arguments passed to your program is not exactly 1, print Error, followed by a new line, and return 1

	-you should use atoi to parse the parameter passed to your program

	-If the number passed as the argument is negative, print 0, followed by a new line

	-You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent
