#include "main.h"

/**
 * print - prints an integer using putchar only
 * @n: integer to be printed
 * Return: void
 */

void print(int n)
{
if (n < 0)
{
_putchar('-');
n = -n;
}
if (n / 10)
print(n / 10);

_putchar(n % 10 + '0');
}
