#include "main.h"

/**
 * main - Entry point, calls print_to_98 function
 *
 * Return: 0 on success
 */
int main(void)
{
print_to_98(0); /* Test case: starting from 0 */
print_to_98(98); /* Test case: already at 98 */
print_to_98(111); /* Test case: descending order */
print_to_98(-10); /* Test case: negative start */

return (0);
}

