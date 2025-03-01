#include "main.h"
#include <stdio.h>

/**
 * main - Entry point, prints the sum of multiples of 3 or 5 below 1024
 *
 * Return: 0 on success
 */
int main(void)
{
int result;

result = sum_multiples_3_5();
printf("%d\n", result);

return (0);
}

