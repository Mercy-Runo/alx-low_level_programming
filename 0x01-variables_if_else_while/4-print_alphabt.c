#include <stdio.h>

/**
 * main - prints all lower case letters of the alphabet excapt q and e
 * Return: 0
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == 'q' || letter == 'e')
			continue;
		else
			putchar(letter);
	}
	putchar('\n');

	return (0);
}

