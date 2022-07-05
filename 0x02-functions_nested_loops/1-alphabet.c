#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description: a function that prints the alphabet in lower case
 *
 * Return: void
 */

void print_alphabet(void)
{
	char letter = 'a';

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
