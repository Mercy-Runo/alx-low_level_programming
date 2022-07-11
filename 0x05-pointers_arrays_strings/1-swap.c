#include <stdio.h>
#include "main.h"

/**
 * swap_int - swaps pointers of arguements
 * @a: whose pointer is swapped with *b
 * @b: whose pointer is swapped with *a
 */

void swap_int(int *a, int *b)
{
*a = *b;
*b = *a;
}
