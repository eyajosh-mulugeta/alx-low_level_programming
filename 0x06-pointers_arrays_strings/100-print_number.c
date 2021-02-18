#include "holberton.h"

/**
 * print_number - Prints integer numbers to the console using
 * a custom made _putchar function.
 * @n: holds the integer value to be printed.
 */
void print_number(int n)
{
unsigned int n1;
n1 = n;
if (n < 0)
{
_putchar('-');
n1 = -n;
}
if (n1 / 10 != 0)
{
print_number(n1 / 10);
}
_putchar((n1 % 10) + '0');
}
