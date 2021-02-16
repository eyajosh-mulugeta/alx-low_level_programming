#include "holberton.h"

/**
 * _atoi - a function that converts a string value to an integer value.
 * @s: a parameter that holds the string value to be cnverted.
 * Return: int.
 */

int _atoi(char *s)
{
int i;
int sign;
unsigned int num;

sign = 1;
num = 0;

for (i = 0; s[i]; i++)
{
if (s[i] == '-')
sign *= -1;
else if (s[i] >= '0' && s[i] <= '9')
num = (num * 10) + (s[i] - '0');
else if (num > 0)
{
break;
}
}
return (num *sign);
}
