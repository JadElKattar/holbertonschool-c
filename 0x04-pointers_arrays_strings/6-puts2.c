#include "holberton.h"
/**
 * puts2 - prints every other character of the string
 * @str: string character
 *
 * Return (VOID)
 */
void puts2(char *str)
{
	int i;
	int count = 0;

	while (str[count] != '\0')
	{
		count++;
	}
	for (i = 0; i < count; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
