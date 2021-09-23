#include "holberton.h"
#include <math.h>

/**
 * print_number - prints an integer
 * @n: integer
 *
 * Return: void
 */
void print_number(int n)
{
	int i = 1;
	int numb = n;

	while (numb / 10)
	{
		numb /= 10;
		i *= 10;
	}
	if (n < 0)
		_putchar('-');

	while (i > 0)
	{
		numb = n / i;
		i /= 10;
		if (n < 0)
			_putchar(numb % 10 * -1 + '0');
		else
			_putchar(numb % 10 + '0');
	}
}
