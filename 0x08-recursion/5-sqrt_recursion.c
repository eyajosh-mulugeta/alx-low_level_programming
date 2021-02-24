#include "holberton.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: holds the number to be placed under square root.
 * Return: int.
 */

int _sqrt_recursion(int n)
{
return (_sqrt(1, n));
}

/**
 * _sqrt - returns int value to _sqrt_recursion.
 * @n: holds the number to be placed under square root.
 * @r: int value.
 * Return: int.
 */

int _sqrt(int r, int n)
{
if (r > n)
return (-1);
if (r * r == n)
return (r);
return (_sqrt(r + 1, n));
}
