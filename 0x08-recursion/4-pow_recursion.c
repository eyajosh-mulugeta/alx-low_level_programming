#include "holberton.h"


/**
 *  _pow_recursion - calculates x raised to the power of y.
 * @x: holds the base value.
 * @y: holds the exponent value.
 * Return: int.
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
return (x * _pow_recursion(x, y - 1));
}
