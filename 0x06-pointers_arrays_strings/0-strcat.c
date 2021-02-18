#include "holberton.h"


/**
 * _strcat - a function which concatenates two string values.
 * @dest: a varible which holds the concatenated value.
 * @src: a variable which holds the value to be concatenated.
 * Return:
 */

char *_strcat(char *dest, char *src()
{

int i, n;

i = 0;

n = 5;

while (src[i])
{
dest[i + n] = src[i];
i++;
}

return (dest);
}
