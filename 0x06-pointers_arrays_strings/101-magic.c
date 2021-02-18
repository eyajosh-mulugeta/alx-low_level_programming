#include <stdio.h>

/**
 * main - where the program starts.
 * Return: void.
 */

int main(void)
{
int n;
int a[5];

a[2] = 1024;
*(&n + 3) = 98;
printf("a[2] = %d\n", a[2]);
return (0);
}
