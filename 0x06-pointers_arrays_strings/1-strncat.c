#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates two strings
 * @dest: string 1
 * @src: string 2
 * @n: number of bytes to be used
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
int len, i;

i = 0;
len = 0;

while (dest[len] != '\0')
++len;

while (src[i] != 0 && i < n)
{
dest[len] = src[i];
++i;
++len;
}

dest[len] = '\0';
return (dest);
}
