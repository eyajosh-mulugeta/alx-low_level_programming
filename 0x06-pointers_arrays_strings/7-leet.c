#include "holberton.h"
/**
 * leet - a function that encodes a string to 1337.
 * @s: holds a string value.
 * Return: string.
 */
char *leet(char *s)
{
int i;
int j;
char l[] = "ol_ea__t";
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; l[j] != '\0'; j++)
{
if (s[i] == l[j] || s[i] == (l[j] - 32))
{
s[i] = j + '0';
}
}
}
return (s);
}
