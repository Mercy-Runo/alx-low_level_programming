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
			result = 'A' - 16;/*result = 65 - 16*/
		else if (number == 11)
			result = 'B' - 16;
		else if (number == 12)
			result = 'C' - 16;
		else if (number == 13)
			result = 'D' - 16;
		else if (number == 14)
			result = 'E' - 16;
		else if (number == 15)
			result = 'F' - 16;
		else
			result = number;

		putchar(result + '0');/*'0' has ASCII value of 48, hence output = result + 48*/
	}
	putchar('\n');

	return (0);
}
