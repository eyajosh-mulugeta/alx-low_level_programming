#include "holberton.h"

/**
 * _abs - this function returns the absolute value of n.
 * @n: n is an integer parameter.
 * Return: the absolute value of n is returned to main().
 */
int _abs(int n)
{
if (n < 0)
n = -1 * n;

return (n);
}
