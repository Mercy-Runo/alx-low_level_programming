#include "main.h"

/**
 * _strcmp - compares 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: returns compared string
 */

int _strcmp(char *s1, char *s2)
{
int i, diff;

for (i = 0; s1[i] != '\0'; ++i)
{
if (s1[i] > s2[i])
{
diff = s1[i] - s2[i];
return (diff);
}
else if (s1[i] < s2[i])
{
diff = s1[i] - s2[i];
return (diff);
}
}
return (0);
}
