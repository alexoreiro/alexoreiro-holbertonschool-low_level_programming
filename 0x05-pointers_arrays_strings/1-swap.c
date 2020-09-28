#include "holberton.h"

/**
 * main - swap the values of two integers.
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
int n;

n = *a;
*a = *b;
*b = n;
}
