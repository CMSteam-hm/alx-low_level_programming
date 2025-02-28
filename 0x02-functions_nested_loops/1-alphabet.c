#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet followed by a new line
 */
void print_alphabet(void)
{
char alphabet[] = "abcdefghijklmnopqrstuvwxyz\n";
_putchar(alphabet[0]);  /* Print the first character */

/* Print the rest of the string using a single _putchar call */
_putchar(*(alphabet + 1));
}

