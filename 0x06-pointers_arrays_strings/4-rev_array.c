#include "main.h"

/**
 * reverse_array - reverse an array of integers
 * @a: array of integers
 * @n: number of elements in the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
int left, right,  tmp;

left = 0;
right = n - 1;

while (left < right)
{
tmp = a[left];
a[left] = a[right];
a[right] = tmp;
left++;
right--;
}
}
