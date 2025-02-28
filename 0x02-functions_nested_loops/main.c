#include "main.h"
#include <stdio.h>

/**
 * main - Tests the print_sign function
 *
 * Return: 0 on success
 */
int main(void)
{
int result;

result = print_sign(98);
printf(" -> %d\n", result);

result = print_sign(0);
printf(" -> %d\n", result);

result = print_sign(-5);
printf(" -> %d\n", result);

return (0);
}

