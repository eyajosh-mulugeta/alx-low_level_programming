#include "holberton.h"

/**
 * _islower - this function checks whether a character
 * is lowercase or not and return an integer value to main().
 * @c: c is an integer value.
 * Return: void.
 */
int _islower(int c)
{

if (c >= 'a' && c <= 'z')
return (1);

return (0);
}
