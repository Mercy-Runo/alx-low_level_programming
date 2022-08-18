#include "main.h"

/**
  * print_binary - prints binary representation of an int n
  * @n: int to be used
  * Return: void
  */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

		/* step 2 */
		printf("%lu", n & 1);
}
