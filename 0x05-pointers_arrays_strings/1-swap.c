#include "holberton.h"

/**
 * swap_int - swaps the value of two variables.
 * @a: the pointer variable which holds the address of
 * the first number.
 * @b: the pointer variable which holds the address of
 * the second number.
 * Return: void.
 */
void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
