#include "holberton.h"

/**
 * _strlen - this function returns the length of a string.
 * @s: a pointer variable which holds the address of the string variable.
 * Return: int.
 */
int _strlen(char *s)
{
int len = 0;
int i;
for (i = 0; s[i] != '\0'; i++)
len++;

return (len);
}
