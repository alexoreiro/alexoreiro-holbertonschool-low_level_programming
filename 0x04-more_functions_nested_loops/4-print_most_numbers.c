#include "holberton.h"

/**
 * print_most_numbers - print numbers from 0 to 9
 * @nsd
 * @na
 * Return: Always 0.
 */

void print_most_numbers(void)
{
int n;

for (n = 0; n <= 9; n++)
{
if (n == 2 || n == 4)
continue;
_putchar(n + '0');
}
_putchar('\n');
}
