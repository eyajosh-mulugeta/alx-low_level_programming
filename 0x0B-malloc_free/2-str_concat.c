#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: holds the first string value.
 * @s2: holds the second string value.
 * Return: pointer.
 */
char *str_concat(char *s1, char *s2)
{
char *str;
int s1_len = 0;
int s2_len = 0;
int total_len = 0;
int i;

while (s1[s1_len])
s1_len++;

while (s2[s2_len])
{
s2_len++;
}

total_len = s1_len + s2_len;

str = malloc((total_len + 1) *sizeof(char));

if (str == NULL)
return (NULL);

for (i = 0; i < s1_len; i++)
str[i] = s1[i];

for (i = 0; i < s2_len; i++)
{
str[s1_len] = s2[i];
s1_len++;
}
str[total_len] = '\0';
return (str);
}
