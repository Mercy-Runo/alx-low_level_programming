#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * puts2 - reverses string
 * @str: string to be reversed
 */

void puts2(char *str)
{
int i;

while (str[i] != '\0')
{
for (i = 0; i <= strlen(str); i += 2)
{
_putchar(str[i]);
}
i++;
}
_putchar('\n');
}
