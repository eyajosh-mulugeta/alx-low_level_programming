#include <stdio.h>

/**
 * main - the main function prints alphabets
 * first in lowecase & then in uppercase.
 * Return: Always 0 (Success)
 */
int main(void)
{
char startChar = 'a';
char endChar = 'z';
for (startChar = 'a'; startChar <= endChar; startChar++)
{
putchar(startChar);
if (startChar == 'z')
{
startChar = 'A';
endChar = 'Z';
startChar--;
}
}
putchar('\n');
return (0);
}
