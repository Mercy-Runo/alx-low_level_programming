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

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	_putchar('\n');
}
