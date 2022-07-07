#include "main.h"

/**
 * print_diagonal - print character "\" n times
 * @n: number of characters to draw
 */

void print_diagonal(int n)
{
int slash;
int space;

if (n > 0)
{
for (slash = 1; slash <= n; slash++)
{
for (space = 1; space < slash; space++)
_putchar(' ');
_putchar('\\');
_putchar('\n');
}
}
else
_putchar('\n');
}
