#include "main.h"
#include <stdlib.h>

/**
 * main - prints numbers 1 to 100,
 * multiples of 3 with Fizz,
 * multiples of 5 with Buzz
 * and multiple of both 3 and 5 with FizzBuzz
 * Return: 0 on success
 */

int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
printf("FizzBuzz\n");
else if (i % 3 == 0)
printf("Fizz\n");
else if (i % 5 == 0)
printf("Buzz\n");
else
printf("%d\n", i);
}
printf("\n");
return (0);
}
