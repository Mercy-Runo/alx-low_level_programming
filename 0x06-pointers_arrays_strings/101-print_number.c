#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * print_number - prints an integer.
 * @n: input integer
 * Return: void
 */

void print_number(int n)
{
unsigned int n1;

n1 = n;

if (n < 0)
{
putchar('-');
n1 = -n;
}
if (n1 / 10 != 0)
{
print_number(n1 / 10);
}
putchar((n1 % 10) + '0');
}
