#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _isdigit - returns a value depending on input c
 * @c: character whose value is checked
 * Return: 0 or 1
 */

int _isdigit(int c);
{
if (isdigit(c))
return (1);
else
return (0);
}
