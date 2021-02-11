#include "holberton.h"

/**
 * _isdigit - checks if a character is a digit or not.
 * @c: the parameter which holds the value to be tested.
 * Return:
 * returns 1, if the value is a digit.
 * returns 0, if the value is not a digit.
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);
return (0);
}
