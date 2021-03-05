#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: holds the destination string.
 * @s2: holds the string value to be concatenated to s1.
 * @n: the number of characters to be copied to s2.
 * Return: char.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *ptr;
unsigned int s1_len = 0;
unsigned int s2_len = 0;
unsigned int total_len = 0;
unsigned int i;
unsigned int j;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[s1_len])
s1_len++;

while (s2[s2_len])
s2_len++;

if (n < s2_len)
s2_len = n;

total_len = s1_len + s2_len;
ptr = malloc((total_len + 1) * sizeof(char));

if (ptr == NULL)
return (NULL);

for (i = 0; i < s1_len; i++)
ptr[i] = s1[i];

for (i = 0, j = s1_len; i < s2_len; i++, j++)
ptr[j] = s2[i];

ptr[total_len] = '\0';
return (ptr);
}
