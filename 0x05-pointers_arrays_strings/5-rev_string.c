#include "holberton.h"

/**
 * rev_string - make a reverse of the string.
 * @s: shows where the string is pointing.
 * Return: Always 0.
 */
void rev_string(char *s)
{
int a, b;
char c;

for (a = 0; s[a] != '\0'; a++)
{
}
b = 0;
for (a = a - 1; b < a; a--)
{
c = s[a];
s[a] = s[b];
s[b] = c;
c++;
}
}
