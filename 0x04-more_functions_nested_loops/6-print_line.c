#include "holberton.h"

/**
 * print_line - prints a line that ends with a new line.
 * @n: the number of times '_' will be printed.
 * Return: void.
 */
void print_line(int n)
{
int i;
if (n > 0)
{
for (i = 0; i < n; i++)
{
_putchar('_');
}
}
_putchar('\n');
}
