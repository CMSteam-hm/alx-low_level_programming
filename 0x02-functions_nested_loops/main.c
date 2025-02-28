#include "main.h"
#include <stdio.h>

/**
 * main - Tests the _isalpha function
 *
 * Return: 0 on success
 */
int main(void)
{
char c;

c = 'A';
printf("%c: %d\n", c, _isalpha(c)); // Should print 1

c = 'z';
printf("%c: %d\n", c, _isalpha(c)); // Should print 1

c = '5';
printf("%c: %d\n", c, _isalpha(c)); // Should print 0

c = '@';
printf("%c: %d\n", c, _isalpha(c)); // Should print 0

return (0);
}

