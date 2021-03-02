#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated
 * space in memory containing a copy of the string.
 * @str: holds a string value to be copied.
 * Return: pointer.
 */
char *_strdup(char *str)
{
char *char_array;
int i = 0;
int len = 0;

if (str == NULL)
return (NULL);

while (str[len])
len++;

char_array = malloc((len + 1) * sizeof(char));

if (char_array == NULL)
return (NULL);
else
{
while (i < len)
{
char_array[i] = str[i];
i++;
}
char_array[len] = '\0';
return (char_array);
}
}
