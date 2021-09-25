#include "holberton.h"
/**
 * factorial - factorial recursive
 * @n: int pointer
 *
 * 
 * Return: int
 */
int factorial(int n)
{
	if (n <= 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
