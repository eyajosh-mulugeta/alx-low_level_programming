#include "holberton.h"

/**
 * _strncpy - copies n bytes of a source into buffer of a destination string.
 * @dest: a variable which stores the copied string value.
 * @src: a variable which holds a string value to be copied.
 * @n: number of bytes to be copied.
 * Return: string.
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
while (i < n)
{
dest[i] = '\0';
i++;
}

return (dest);
}
