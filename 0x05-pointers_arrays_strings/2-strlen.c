#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strlen - returns length of the string arguement
 * @s: string whose length is returned
 * Return: returns the length of the string
 */

int _strlen(char *s)
{
int length = 0;

while (*s != '\0')

{
length++;
s++;
}

return (length);
}
