#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - prints 98 numbers
 * @n: integer
 *
 * Return: integer n
 */
void print_to_98(int n)
{
	int i;

	if (n == 98)
	{
		printf("%d", n);
		putchar('\n');
	}
	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}
	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}
}`#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - prints 98 numbers
 * @n: integer
 *
 * Return: integer n
 */
void print_to_98(int n)
{
	int i;

	if (n == 98)
	{
		printf("%d", n);
		putchar('\n');
	}
	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}
	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}
}
