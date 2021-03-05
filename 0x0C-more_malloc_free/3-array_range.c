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

if (min > max)
{
return (NULL);
}

total_len = (max - min) + 1;

ptr = malloc(total_len *sizeof(int));

if (ptr ==  NULL)
{
return (NULL);
}
else
{
for (i = 0, j = min; j <= max; i++, j++)
ptr[i] = j;

return (ptr);
}
}
