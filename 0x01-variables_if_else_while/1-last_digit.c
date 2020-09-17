#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int last;

srand(time(0));
n = rand() - RAND_MAX / 2;
last = n % 10;
if (last > 5)
{
printf(" Last digit of %d is %d and is greater", n, last);
printf("than 5\n");
}
if (last < 6)
{
printf(" Last digit of %d is %d and is less", n, last);
printf(" than 6\n");
}
if (last == 0)
{
printf(" Last digit of %d is %d and is 0\n", n, last);
}
return (0);
}
