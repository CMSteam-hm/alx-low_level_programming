#include "main.h"
#include <stdio.h>

/**
 * main - Tests the print_last_digit function
 *
 * Return: 0 on success
 */
int main(void)
{
int r;

r = print_last_digit(98);
printf(": %d\n", r);

r = print_last_digit(-1234);
printf(": %d\n", r);

r = print_last_digit(0);
printf(": %d\n", r);

return (0);
}


