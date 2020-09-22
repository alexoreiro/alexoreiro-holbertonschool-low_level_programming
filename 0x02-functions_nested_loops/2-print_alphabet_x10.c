#include "holberton.h"

/**
 * print_alphabet_x10 - prints lowercase alphabet ten times
 *
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
int a, b;

a = 0;
while (a < 10)
{
for (b = 'a' ; b <= 'z'; b++)
_putchar(b);
_putchar('\n');
a++;
}
}

