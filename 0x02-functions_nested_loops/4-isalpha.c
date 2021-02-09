#include "holberton.h"

/**
 * _isalpha - this function tests whether a character is
 * alphabet or not and return an integer value to main().
 * @c: c is an integr value.
 * Return: _isalpha returns 1 if c is a letter, else returns 0.
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
return (0);
}
