#include "holberton.h"
/**
 * square - find the natural square root
 * @i: number
 * @j: base
 *
 * Return: int
 */
int square(int i, int j)
{
	if (i * i == j)
		return (i);
	if (i * i > j)
		return (-1);
	else
		return (square(i + 1, j));
}

#include "holberton.h"
/**
 *_sqrt_recursion - radical
 *@n: square rooted number
 *
 *Return: int
 */
int _sqrt_recursion(int n)
{
	return (square(1, n));
}
