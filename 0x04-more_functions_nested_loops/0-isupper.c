#include "holberton.c"

/**
 * _isupper - checks if a character is uppercase.
 * @c: a parameter that holds the character.
 * Return:
 * returns 1 if the character is uppercase.
 * returns 0 if the c is not uppercase.
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
return (0);
}
