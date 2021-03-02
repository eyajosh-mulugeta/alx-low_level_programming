#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - create an array of chars and initialize it.
 * @size: the size of the array.
 * @c: the character to be inserted into the array.
 * Return: pointer to an array.
 */
char *create_array(unsigned int size, char c)()
{
if (size == 0)
return (NULL);

char *my_array;
my_array = malloc(size * sizeof(char));
my_array[0] = c;
return (my_array);
}
