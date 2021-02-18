#include "holberton.h"
/**
 * string_toupper - changes all characters of a string to uppercase.
 *@s: a variable which holds the string value.
 *Return: string.
 */
char *string_toupper(char *s)
{
int c = 0;
while (s[c] != '\0')
{
if (s[c] >= 'a' && s[c] <= 'z')
{
s[c] = s[c] - 32;
}
c++;
}
return (s);
}
