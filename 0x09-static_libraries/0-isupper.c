#include "holberton.h"

/**
 * _isupper - checks for uppercase character
 * @c: - number to check
 * Return: 1 if c is uppercase; 0 if otherwise
 */
int _isupper(int c)
{
int result;

if ((c >= 'A') && (c <= 'Z'))
result = 1;
else
result = 0;

return (result);
}
