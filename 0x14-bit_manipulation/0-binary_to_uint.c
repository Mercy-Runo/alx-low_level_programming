#include "main.h"

/**
  * binary_to_uint - converts a string b to an unsigned int
  * @b: string to be converted
  * Return: converted string
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i;

	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		num <<= 1;
		if (b[i] == '1')
			num += 1;
	}
	return (num);
}
