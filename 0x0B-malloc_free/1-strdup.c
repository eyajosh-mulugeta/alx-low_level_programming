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
int count = 0;
int i = 0;

while (str[count])
count++;

char_array = malloc(count *sizeof(char));

if (str == NULL)
return (NULL);

if (char_array != NULL)
{
while (i < count)
{
char_array[i] = str[i];
i++;
}
return (char_array);
}

return (NULL);
}
