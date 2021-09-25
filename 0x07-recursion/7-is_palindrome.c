#include "holberton.h"

/**
 * _strlen_recursion - length of string
 * @s: string
 *
 * Return: int
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
	return (0);
}
/**
 *palindrome - checks palind
 *@s: string
 *@l: length
 *@c: counter
 *
 *Return: int
 */
int palindrome(char *s, int l, int c)
{
	if (c >= l)
		return (1);
	if (s[l] == s[c])
		return (palindrome(s, l - 1, c + 1));
	return (0);
}
/**
 *is_palindrome - checks palindrome
 *@s: string pointer
 *
 *Return: int
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);
	int count = 0;

	return (palindrome(s, len - 1, count));
}
