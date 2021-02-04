#include <stdio.h>

/**
 * main - the main function prints all alphabets except 'q' & 'e'
 * in lowecase.
 * Return: Always 0 (Success)
 */
int main(void)
{

char startChar = 'a';
char endChar = 'z';
for (startChar = 'a'; startChar <= endChar; startChar++)
{
if (startChar != 'q' && startChar != 'e')
putchar(startChar);
}

putchar('\n');
return (0);
}
