#include <stdio.h>

/**
 * main - prints all numbers of base 16
 * Return: 0
 */

int main(void)
{
	int number, result;

	for (number = 0; number < 16; number++)
	{
		if (number == 10)
			result = 'A';
		else if (number == 11)
			result = 'B';
		else if (number == 12)
			result = 'C';
		else if (number == 13)
			result = 'D';
		else if (number == 14)
			result = 'E';
		else if (number == 15)
			result = 'F';
		else
			result = number;

		putchar(result + '0');
	}
	putchar('\n');

	return (0);
}
