#include "holberton.h"

/**
 * _strcpy - copies the string pointed by src including the null byte
 * to the buffer pointed to by dest
 * @dest: pointer to buffer
 * @src: string to be copied
 * Return: string pointed by dest
 */
char *_strcpy(char *dest, char *src)
{
int a, b;
for (a = 0; src[a] != '\0'; a++)
{
}
for (b = 0; b <= a; b++)
{
dest[b] = src[b];
}
return (dest);
}
