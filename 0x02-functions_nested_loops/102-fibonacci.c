#include <stdio.h>
#include "main.h"

/**
 * print_fibonacci - Prints the first 50 Fibonacci numbers
 *                  starting from 1 and 2
 */
void print_fibonacci(void)
{
int count;
unsigned long a = 1, b = 2, next;

printf("%lu, %lu", a, b);

for (count = 2; count < 50; count++)
{
next = a + b;
printf(", %lu", next);
a = b;
b = next;
}
printf("\n");
}

