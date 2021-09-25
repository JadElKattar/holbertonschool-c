#include "holberton.h"
/**
 * _print_rev_recursion - prints recursively
 * @s: string pointer
 * 
 * Return: VOID
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
