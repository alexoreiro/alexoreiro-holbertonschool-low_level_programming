#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * strtow - how great it the str
 * @str: the string
 * Return: the concatenated string
 */

char **strtow(char *str)
{
char **p;
int cont = 0;

if (str == NULL || str[0] == 0)
return (NULL);
while (str[cont])
cont++;
p = (char **)malloc(sizeof(char) * cont);
if (p == NULL)
return (NULL);
return (p);
}
