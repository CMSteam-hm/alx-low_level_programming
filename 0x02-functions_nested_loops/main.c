#include "main.h"
#include <stdio.h>

/**
 * main - Tests the _islower function
 *
 * Return: 0 on success
 */
int main(void)
{
char c1 = 'g';
char c2 = 'G';

printf("%c: %d\n", c1, _islower(c1)); // Expected output: g: 1
printf("%c: %d\n", c2, _islower(c2)); // Expected output: G: 0

return (0);
}

