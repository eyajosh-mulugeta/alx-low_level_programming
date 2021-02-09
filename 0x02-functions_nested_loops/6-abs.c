#include "holberton.h"

/**
 * main - this function invokes and pass an argument to
 * _abs function and prints the returned value.
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
n = _abs(-7);


 _putchar(n + '0');
return (0);
}

/**
 * _abs - this function returns the absolute value of n.
 * @n: n is an integer parameter.
 * Return: the absolute value of n is returned to main().
 */
int _abs(int n)
{
if (n < 0)
n = -1 * n;
return n;
}
