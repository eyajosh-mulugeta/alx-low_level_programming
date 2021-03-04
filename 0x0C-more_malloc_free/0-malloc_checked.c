#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc.
 * @b: holds an address.
 * Return: void.
 */
void *malloc_checked(unsigned int b)
{
int *ptr;

ptr = malloc(b);

if (!ptr)
{
exit(98);
}
else
{
return (ptr);
}
}
