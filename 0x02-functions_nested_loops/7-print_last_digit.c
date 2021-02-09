#include "holberton.h"

/**
 * print_last_digit - returns the last digit of a number
 * to the caller function.
 * @n: n is an integer number.
 * Return: lastDigit.
 */
int print_last_digit(int n)
{

_putchar('0' + _abs(n % 10));

return (_abs(n % 10));
}
