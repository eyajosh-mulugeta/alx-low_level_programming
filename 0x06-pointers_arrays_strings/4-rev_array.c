#include "holberton.h"

/**
 * reverse_array - reverses all of the array elements.
 * @a: the array variable.
 * @n: the number of elements in the array.
 */

void reverse_array(int *a, int n)
{

int tmp, beg = 0;
int end = n - 1;

while (beg < end)
{
tmp = *(a + beg);
*(a + beg) = *(a + end);
*(a + end) = tmp;
beg++, end--;
}
}
