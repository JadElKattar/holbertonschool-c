#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/** 
* main - Last Digit Sign
* Return:0 (Success)
*/

int main(void)
{
	int n; 
	int LastDigit;
	int sam;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* Code starts here */ 
	LastDigit = n % 10;
	if (LastDigit == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, LastDigit);
	}
	else if (LastDigit < 6 && LastDigit != 0)
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, LastDigit);
	}
	if (LastDigit > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, LastDigit);
	}
	return (0);
}
