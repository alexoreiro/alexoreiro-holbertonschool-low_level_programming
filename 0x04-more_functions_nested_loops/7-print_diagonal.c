#include "holberton.h"

/**
 * print_diagonal - prints a diagonal line in terminal
 * @n: number of _ to be added
 * Return: Nothing.
 */

void print_diagonal(int n)
{
int i;

for (i = 0; n > 0 && i < n; i++)
{
_putchar('\\');
}
_putchar('\n');
}
