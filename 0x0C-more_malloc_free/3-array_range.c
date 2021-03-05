#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - reates an array of integers.
 * @min: minimum number.
 * @max: maximum number.
 * Return: int.
 */
int *array_range(int min, int max)
{
int *ptr;
int i;
int total_len;

total_len = max - min;

ptr = malloc(total_len * sizeof(int));

for (i = 0; i < max; i++)
{
ptr[i] = min;
min++;
}

if (min > max)
return (NULL);

if (!ptr)
return (NULL);

return (ptr);
}
