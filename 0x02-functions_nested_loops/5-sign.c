#include "holberton.h"

/**
 * main - this function invokes print_sign and pass an integer value
 * and print the returned value to the console.
 * Return: Always 0 (Success)
 */
int main(void)
{
_putchar(print_sign(98) + '0');

return (0);
}

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
