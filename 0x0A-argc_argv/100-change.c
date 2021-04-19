#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry
 * @argc: count of arguments
 * @argv: arguments passed
 * Return: always 0
 */

int main(int argc, char *argv[])
{
int total = 0, coins = 0;

if (argc != 2)
{
printf("Error\n");
return (1);
}
total = atoi(argv[1]);
if (total <= 0)
{
printf("0\n");
return (0);
}
while (total >= 25)
{
total -= 25;
coins++;
}
while (total >= 10)
{
total -= 10;
coins++;
}
while (total >= 5)
{
total -= 5;
coins++;
}
while (total >= 2)
{
total -= 2;
coins++;
}
if (total == 1)
coins++;
printf("%d\n", coins);
return (0);
}
