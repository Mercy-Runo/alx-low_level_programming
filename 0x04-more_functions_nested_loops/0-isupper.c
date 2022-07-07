#include "main.h"
#include <ctype.h>
#include <stdlib.h>

/**
 * _isupper - check for upper case letter
 * @c : character to check the case
 * Return:0 or 1
 */

int _isupper(int c)
{
if (isupper(c))
{
return (1);
}
else
return (0);
}
