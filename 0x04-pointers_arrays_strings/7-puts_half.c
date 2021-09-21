#include "holberton.h"

/**
 * puts_half - prints the half of the string inserted
 *@str: string
 *
 * Return (VOID)
 */
void puts_half(char *str)
{
	int count = 0; 
	int n;

	while (str[count] != '\0')
	{
		count++;
	}
	count++
	for (n = count / 2; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
