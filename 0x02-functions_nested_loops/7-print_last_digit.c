#include "holberton.h"

/**
 * print_last_digit - returns the last digit of a number
 * to the caller function.
 * @n: n is an integer number.
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
int lastDigit;
lastDigit = n % 10;
_putchar(lastDigit);
return (lastDigit);
}
