#include "holberton.h"

int _isalpha(int c)
{
int result;

if ((c >= 'a') && (c <= 'z'))
result = 1;
else if ((c >= 'A') && (c <= 'Z'))
result = 1;
else
result = 0;

return (result);
}
