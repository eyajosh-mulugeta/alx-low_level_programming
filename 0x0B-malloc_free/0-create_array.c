#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - create an array of chars and initialize it.
 * @size: the size of the array.
 * @c: the character to be inserted into the array.
 * Return: pointer to an array.
 */
char *create_array(unsigned int size, char c)
{
char *my_array;
unsigned int i = 0;
if (size == 0)
return (NULL);

my_array = malloc(size * sizeof(char));
if (my_array == NULL)
return (NULL);

while (i < size)
{
my_array[i] = c;
i++;
}
return (my_array);
}
