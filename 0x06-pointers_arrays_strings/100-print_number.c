#include "holberton.h"

/**
 * print_number - Prints integer numbers to the console using
 * a custom made _putchar function.
 * @n: holds the integer value to be printed.
 */
void print_number(int n)
{
unsigned int num = n;

if (n < 0)
{
_putchar('-');
num = -num;
}

if ((num / 10) > 0)
print_number(num / 10);

_putchar((num % 10) + '0');
}
