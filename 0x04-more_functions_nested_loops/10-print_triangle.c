#include "holberton.h"

/**
 * print_triangle - prints triangle using the # symbol.
 * @size: the size of the triangle.
 * Return: void.
 */
void print_triangle(int size)
{
int i;
int j;
int count;

if (size > 0)
{
for (i = 1; i <= size; i++)
{
count = size - i;
for (j = 0; j < size; j++)
{
if (count >= 1)
{
_putchar(' ');
count--;
}
else
{
_putchar('#');
}
}
if (i != size)
{
_putchar('\n');
}
}
}
_putchar('\n');
}
