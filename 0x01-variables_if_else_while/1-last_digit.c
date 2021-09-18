#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* Solving project 1 */

/**
 *main- last digit sign
 *Return: 0 (Success)
 */
int main(void)
{
	int n;
	int lastDt;
	int sam;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastDt = n % 10;
	if (lastDt == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, lastDt);
	}
	else if (lastDt < 6 && lastDt != 0)
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, lastDt);
	}
	if (lastDt > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, lastDt);
	}
	return (0);
}
