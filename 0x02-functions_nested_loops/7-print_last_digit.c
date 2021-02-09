#include "holberton.h"

/**
 * print_last_digit - returns the last digit of a number
 * to the caller function.
 * @n: n is an integer number.
 * Return: lastDigit.
 */
int print_last_digit(int n)
{
int lastDigit;
lastDigit = n % 10;

if (lastDigit < 0)
lastdigit *= -1;

_putchar(lastDigit + '0');

return (lastDigit);
}
