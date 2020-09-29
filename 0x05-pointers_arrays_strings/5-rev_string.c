#include "holberton.h"

/**
 * rev_string - make a reverse of the string.
 * @s: shows where the string is pointing.
 * Return: Always 0.
 */
void rev_string(char *s)
{
int count, rev;
char letter;


for (count = 0; s[count] != '\0'; count++)
{
}
rev = 0;
for (count = count - 1; rev < count; count--)
{
letter = s[count];
s[count] = s[rev];
s[rev] = letter;
rev++;
}
}
