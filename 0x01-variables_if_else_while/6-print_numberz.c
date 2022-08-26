#include <stdio.h>

/**
 * main - prints all single base 10 numbers
 * Return: 0
 */

int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
		putchar(number + '0');

	putchar('\n');

	return (0);
}
