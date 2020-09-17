#include <stdio.h>

/**
 * main -Print alphabet
 * without q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char a;

a = 'a';
while (a <= 'z')
{
putchar(a);
a++;
if (a == 'e' || a == 'q')
{
a++;
}
}
putchar(10);

return (0);
}
