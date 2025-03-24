#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: The string to print
 *
 * Description: Uses recursion to print each character of the string
 * without using loops or standard library functions.
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(s + 1);
}

