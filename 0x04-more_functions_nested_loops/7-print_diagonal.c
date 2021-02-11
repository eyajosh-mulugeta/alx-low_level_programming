#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line on the console.
 * @n: the number of times '\' will be printed.
 * Return: void.
 */
void print_diagonal(int n)
{
int i;
int j;
int k;

if (n > 0)
{
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
for (k = 0; k < j; k++)
{
_putchar(' ');
}
}
_putchar('\\');
_putchar('\n');
}
}
_putchar('\n');
}
