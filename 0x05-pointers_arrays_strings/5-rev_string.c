#include "holberton.h"
#include "_putchar.c"


/**
 * rev_string - A function which reverses a string and print on console.
 * @s: a pointer variable which holds the string.
 * Return: void.
 */
void rev_string(char *s)
{
char *str_ptr;
char *end_ptr;
char temp;

int i;
int len;
len  = 0;
i = 0;

while (s[i] != '\0')
{
len++;
i++;
}

str_ptr = s;
end_ptr = s + (len - 1);

for (i = 0; i < (len / 2); i++)
{
temp = *end_ptr;
*end_ptr = *str_ptr;
*str_ptr = temp;

str_ptr++;
end_ptr--;
}
}
