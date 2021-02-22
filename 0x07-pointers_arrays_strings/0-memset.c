#include "holberton.h"


/**
 * _memset - populates memory with a constant byte.
 * @s: holds the address of the memory to be populated.
 * @b: holds the constant value to be populated.
 * @n: holds the number of bytes to be populated.
 * Return: pointer.
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
