#include "main.h"

/**
 * main - Entry point, tests the print_times_table function
 *
 * Return: 0 on success
 */
int main(void)
{
print_times_table(3); /* Example: printing 3 times table */
_putchar('\n');
print_times_table(15); /* Printing 15 times table */
_putchar('\n');
print_times_table(-1); /* Should print nothing */
return (0);
}

