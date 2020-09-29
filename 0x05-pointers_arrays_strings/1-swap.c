#include "holberton.h"

/**
 * swap_int - swap the values of two integers.
 * @a: numbers to be swaped with *b
 * @b: numbers to be swaped with *a
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
int n;

n = *a;
*a = *b;
*b = n;
}
