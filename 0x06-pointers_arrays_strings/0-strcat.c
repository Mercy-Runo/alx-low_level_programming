#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strcat - concantenates contents of arg 2 to those of arg 1
 * @dest: arg 1
 * @src: arg 2
 * Return: concantenated string
 */

char *_strcat(char *dest, char *src)
{
int i, j;

i = 0;
j = 0;

while (dest[i] != '\0')
i++;

while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}

dest[i] = '\0';
return (dest);
}
