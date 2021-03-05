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
char *ptr;
int i;
int total_size = nmemb * size;

if (nmemb == 0 || size == 0)
return (NULL);

ptr = malloc(total_size);

if (ptr == NULL)
return (NULL);

for (i = 0; i < total_size; i++)
ptr[i] = '\0';

return (ptr);
}
