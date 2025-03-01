#include "main.h"

/**
 * print_number - Prints an integer using _putchar
 * @n: The integer to print
 */
void print_number(int n)
{
if (n < 0)
{
_putchar('-');
n = -n;
}

if (n / 10)
print_number(n / 10);

_putchar((n % 10) + '0');
}

/**
 * main - Entry point, tests the add function
 *
 * Return: 0 on success
 */
int main(void)
{
int result;

result = add(5, 7);
print_number(result);
_putchar('\n');

result = add(-3, 8);
print_number(result);
_putchar('\n');

result = add(0, 0);
print_number(result);
_putchar('\n');

return (0);
}


