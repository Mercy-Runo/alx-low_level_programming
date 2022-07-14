#include "main.h"

/**
  * rot13 - encodes string using rot13
  * @s: inpt string
  * Return: encoded string
  */

char *rot13(char *s)
{
char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
int i, j;

for (j = 0; s[j] != '\0'; j++) /*loop through string*/
{
i = 0;
while (a[i] != '\0' && s[j] != a[i]) /*loop through rot13 arr*/
i++;
if (s[j] == a[i]) /*if alpha matches, set to index in b arr*/
s[j] = b[i];
}
return (s);
}
