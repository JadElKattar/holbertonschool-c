#include "holberton.h"

/**
 * swap_int - swaps the values of 2 integers
 * @a: first integer
 * @b: second integer
 *
 * Return (VOID)
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
