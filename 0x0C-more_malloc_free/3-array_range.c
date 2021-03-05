#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

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
int j;
int total_len;

total_len = (max - min) + 1;

ptr = malloc((total_len + 1) *sizeof(int));

for (i = 0, j = min; i <= max; i++, j++)
ptr[i] = j;

if (min > max)
return (NULL);

if (ptr ==  NULL)
return (NULL);

return (ptr);
}
