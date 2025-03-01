#include <stdio.h>

/**
 * print_fibonacci - Prints the first 50 Fibonacci numbers
 * starting from 1 and 2, separated by ", "
 */
void print_fibonacci(void)
{
long int a = 1, b = 2, next;
int i;

printf("%ld, %ld", a, b);

for (i = 3; i <= 50; i++)
{
next = a + b;
printf(", %ld", next);
a = b;
b = next;
}
printf("\n");
}

