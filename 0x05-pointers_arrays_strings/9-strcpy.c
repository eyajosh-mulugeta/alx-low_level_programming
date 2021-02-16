#include "holberton.h"

/**
 * _strcpy - copies the string from one variable to another.
 * @src: the string pointer variable which holds the addres of
 * the value to be copied.
 * @dest: the string pointer variable address where the copied string
 * value from src will be stored.
 * Return: char.
 */

char *_strcpy(char *dest, char *src)
{

int len = 1;
int i;
for (i = 0; src[i] != '\0'; i++)
len++;

for (i = 0; i < len; i++)
dest[i] = src[i];

return (dest);
}
