#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all possible combinations of 2 digits
 * Return: 0
 */

int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i == j || i > j)
				continue;

			putchar(i + '0');
			putchar(j + '0');
			if (stdout)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
