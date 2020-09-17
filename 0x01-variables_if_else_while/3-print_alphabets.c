#include <stdio.h>
/**
 * main - Prints alphabet in lower
 * and uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char a;

for (a = 'a' ; a <= 'z' ; a++)
{
putchar(a);
}
for (a = 'A'; a <= 'Z'; a++)
{
putchar(a);
}

putchar('\n');
return (0);
}
