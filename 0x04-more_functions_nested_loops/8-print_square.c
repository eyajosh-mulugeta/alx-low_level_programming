#include "holberton.h"

/**
 * print_square - prints a square using the # symbol.
 * @size: the size of the square.
 * Return: void.
 */
void print_square(int size)
{
int i;
int j;

if (size > 0)
{
for (i = 1; i <= size; i++)
{
for (j = 0; j < size; j++)
{
_putchar('#');
}
if (i != size)
_putchar('\n');
}
}
_putchar('\n');
}
