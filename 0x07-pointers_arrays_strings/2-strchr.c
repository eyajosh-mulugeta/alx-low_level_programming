#include "holberton.h"

/**
 * _strchr - find and locate a character in a string.
 * @s: holds the string to be traversed.
 * @c: holds the character to be searched and located.
 * Return: pointer.
 */

char *_strchr(char *s, char c)
{
int ln = 0;

while  (s[ln] >= '\0')
{
ln++;

if (s[ln] == c)

return (s + ln);
}
return ('\0');
}
