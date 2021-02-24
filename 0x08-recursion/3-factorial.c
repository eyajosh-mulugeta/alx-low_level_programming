#include "holberton.h"


/**
 * factorial - returns the factorial of a number.
 * @n: holds the number.
 * Return: int.
 */

int factorial(int n)
{
if (n < 0)
return (-1);

else if (n == 0)
return (1);

return (n * factorial(n - 1));
}
