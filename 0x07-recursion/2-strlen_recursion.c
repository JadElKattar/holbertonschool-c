#include "holberton.h"
/**
 *_strlen_recursion - returns length of a string recursively
 *@s: pointer char
 *
 *Return: int
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (_strlen_recursion(s + 1) + 1);
}
