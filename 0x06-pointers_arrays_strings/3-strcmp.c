#include "holberton.h"

/**
 * _strcmp - compares the values of two strings variables.
 * @s1: a varible which holds the first string value.
 * @s2: a varible which holds the second string value.
 * Return: int that tells num spaces in between
 */

int _strcmp(char *s1, char *s2)
{
int i = 0;

while (*(s1 + i) == *(s2 + i) && *(s1 + i))
i++;

if (*(s2 + i))
return ((*(s1 + i)) -(*(s2 + i)));
else
return (0);
}
