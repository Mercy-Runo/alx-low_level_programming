#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _isdigit - returns a value depending on input c
 * @c: character whose value is checked
 * Return: 0 or 1
 */

int _isdigit(int c);
{
if (c >= 0 && c <= 9)
return (1);
else
return (0);
}
