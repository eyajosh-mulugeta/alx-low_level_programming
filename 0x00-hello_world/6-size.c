#include <stdio.h>

/**
 * main - the main function prints
 * the size of the various int types.
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("Size of a char: %d \n", sizeof(char));
printf("Size of an int: %d \n", sizeof(int));
printf("Size of a long int: %d \n", sizeof(long));
printf("Size of a long long int: %d \n", sizeof(long int));
printf("Size of a float: %d \n", sizeof(float));
return (0);
}
