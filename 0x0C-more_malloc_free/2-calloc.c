#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array.
 * @nmemb: int.
 * @size: int.
 * Return: void.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
int *ptr;

if (nmemb == 0 || size == 0)
return (NULL);

ptr = malloc(nmemb * size);

if (ptr == NULL)
{
return (NULL);
}
else
{
return (ptr);
}
}
