#include "main.h"

/**
  * print_binary - prints binary representation of an int n
  * @n: int to be used
  * Return: void
  */

void print_binary(unsigned long int n)
{
	int length;
	unsigned long int mask = 1;

	length = _length(n);

	if (length > 0) /*create mask based on length of number*/
		mask <<= length; /*shift mask to the left by length*/

	while (mask > 0)
	{
		if (n & mask) /*if n & mask == 1 print 1*/
			_putchar('1');
		else /*else if n & mask == 0 print 0*/
			_putchar('0');

		mask >>= 1; /*shift mask to the right by 1*/
	}
}
