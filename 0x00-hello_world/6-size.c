#include <stdio.h>

/**
 * main - the main function prints
 * the size of the various int types.
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("Size of a char: %d(s)\n", (int)sizeof(char));
printf("Size of an int: %d(s)\n", (int)sizeof(int));
printf("Size of a long int: %d(s)\n", (int)sizeof(long));
printf("Size of a long long int: %d(s)\n", (int)sizeof(long long int));
printf("Size of a float: %d(s)\n", (int)sizeof(float));
return (0);
}
