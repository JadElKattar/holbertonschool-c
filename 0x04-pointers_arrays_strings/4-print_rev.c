#include "holberton.h"

/**
 * print_rev - prints the string in reverse
 * @s: string
 *
 * Return (VOID)
 */
void print_rev(char *s)
{
	int i, Sl;
	
	Sl = _strlen(s);

	for (i = Sl - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

/**
 * _strlen - returns the length of a string
 * @s: string
 *
 * Return: string length
 */
int _strlen(char *s)
{
	int count = 0;
	int start;

	for (start = 0; s[start] != 0; start++)
	{
		count++;
	}
	return (count);
}
