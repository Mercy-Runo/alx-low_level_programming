#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main -Entry point
 *
 *Return: Always 0
 */

int main(void)
{
	int n,s;
	char startString[] = "Last digit of";
	char endString[] = "";
	srand(time(0));
	n = rand() - RAND_MAX / 2;
       	/* your code goes there */
	s = n%10;
	if (s > 5)
	{
		endString[] = "and is greater that 5";
		printf("%s %d is %d %s\n", startString, n, s, endString);
	}
	else if (s == 0)
	{
		endString[] = "and is 0";
		printf("%s %d is %d %s\n", startString, n, s, endString);
	}
	else if (s < 6 && s != 0)
        {
		endString[] = "and is less than 6 and not 0";
		printf("%s %d is %d %s\n", startString, n, s, endString);
	}
	return (0);
}
