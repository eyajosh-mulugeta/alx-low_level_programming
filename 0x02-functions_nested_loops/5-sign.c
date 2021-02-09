#include "holberton.h"

/**
 * print_sign - this function tests the sign of a
 * number (n).
 * @n: n is an integer parameter.
 * Return: 0 if n is zero, 1 if n is positive or -1 if n is negative.
 */
int print_sign(int n)
{

if (n > 0)
{
_putchar('+');
_putchar(',');
_putchar(' ');
return (1);
}
else if (n < 0)
{
_putchar('-');
_putchar(',');
_putchar(' ');
return (-1);
}
else
{
_putchar('0');
_putchar(',');
_putchar(' ');
return (0);
}
}
