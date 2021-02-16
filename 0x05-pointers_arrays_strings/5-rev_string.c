#include "holberton.h"

/**
 * rev_string - A function which reverses a string and print on console.
 * @s: a pointer variable which holds the string.
 * Return: void.
 */
void rev_string(char *s)
{
int i;
int len = 0;
char *str_ptr;
char *end_ptr;
char temp;

str_ptr = s;
end_ptr = s ;


while (s[len])
len++;

for (i = 0; i < len - 1; i++)
end_ptr++;

for (i = 0; i < len--; i++)
{
temp = *end_ptr;
*end_ptr = *str_ptr;
*str_ptr = temp;

str_ptr++;
end_ptr--;
}
}
