#include "holberton.h"
/**
 * _puts_recursion - put with recursion
 * @s: string
 *
 * Return: VOID
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
	else 
		_putchar('\n');
}
