#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - returns a pointer to a newly allocated
 * space in memory containing a copy of the string.
 * @str: holds a string value to be copied.
 * Return: pointer.
 */
char *_strdup(char *str)
{
char *char_array;
unsigned int i = 0;

if (str == NULL)
return (NULL);

char_array = malloc(sizeof(str));

if (char_array == NULL)
return (NULL);

while (i <= sizeof(str))
{
char_array[i] = str[i];
i++;
}
return (char_array);
}
