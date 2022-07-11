#include <stdio.h>
#include "main.h"

/**
 * _puts - prints to standard output
 * @str: string being outputted
 */

void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');
}
