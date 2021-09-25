#include "holberton.h"

/**
 * prime - check prime
 * @i: iterates
 * @j: base
 * Return: int
 */
int prime(int i, int j)
{
	if (j % i == 0 || j < 2)
		return (0);
	else if (i == j - 1)
		return (1);
	else if (j > i)
		return (prime(i + 1, j));
	return (1);
}
/**
 *is_prime_number - check prime
 *@n: number to check if prime
 *
 *Return: int
 */
int is_prime_number(int n)
{
	return (prime(2, n));
}
