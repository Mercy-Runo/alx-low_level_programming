#include "main.h"

/**
 * _strncpy - copies arg 2 to arg 1
 * @dest: string 1
 * @src: string 2
 * @n: number of bytes to be appended
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;

i = 0;

for ( ; i < n && src[i] != '\0'; ++i)
{
dest[i] = src[i];
}

while (i < n)
{
dest[i] = '\0';
++i;
}

return (dest);
}
