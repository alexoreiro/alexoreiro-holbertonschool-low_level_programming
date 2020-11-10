#include <stdio.h>

/**
 * main: prints all possible different 
 * combinations of two digits
 *
 * Return: 0
 */

int main(void)
{
int n;

for (n = 0; n <= 99; n++)
{
if (n % 10 != n / 10)
{
putchar((n / 10) + '0');
putchar((n % 10) + '0');
}
if (n != 89)
{
putchar(',');
putchar(' ');
}
else
{
putchar('\n');
}
}
return (0);
}
