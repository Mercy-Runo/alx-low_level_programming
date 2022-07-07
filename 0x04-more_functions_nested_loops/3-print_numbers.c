#include "main.h"
#include <stdio.h>

/**
 * print_numbers - print numbers
 *
 * Description: prints the numbers, from 0 to 9, followed by a new line
 * Return: Always (0)
 */

void print_numbers(void)
{
int i;

for (i = 0; i <= 9; i++)

{
printf("%d", i);
}
printf('\n');
}
