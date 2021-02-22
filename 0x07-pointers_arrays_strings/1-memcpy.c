#include "holberton.h"

/**
 * _memcpy - copies memory area from source to destination.
 * @dest: stores the copied memory area.
 * @src: holds the memory area which will be copied.
 * @n: holds the number of memory areas to be copied.
 * Return: pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
*dest = src[i];
}
return (dest);
}
