#include <stdio.h>

/**
 * main - the main function prints all numbers of base16 in lowecase.
 * Return: Always 0 (Success)
 */
int main(void)
{
int num;
char startChar = 'a';
char endChar = 'f';
char hexValue;

for (num = 0; num < 16; num++)
{
hexValue = num + '0';

if (num > 9 && startChar <= endChar)
{
hexValue = startChar;
startChar++;
}

putchar(hexValue);

}
putchar('\n');
return (0);
}
