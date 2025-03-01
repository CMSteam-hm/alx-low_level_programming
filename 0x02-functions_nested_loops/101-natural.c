#include "main.h"
#include <stdio.h>

/**
 * sum_multiples_3_5 - Computes the sum of all multiples of 3 or 5 below 1024
 *
 * Return: The computed sum
 */
int sum_multiples_3_5(void)
{
int sum = 0;
int i;

for (i = 0; i < 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0)
sum += i;
}

return sum;
}

