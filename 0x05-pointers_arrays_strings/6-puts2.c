#include "holberton.h"
#include <string.h>

/**
 * -
 * Return:
 */
void puts2(char *str)
{
int i;
int len;

len = strlen(str);
for (i = 0; i < len; i+=2)
_putchar(str[i]);
_putchar('\n');
}
