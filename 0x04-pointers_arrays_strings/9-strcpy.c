#include "holberton.h"

/**
 * _strcpy - copy dest to src
 * @dest: destination
 * @src: source
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *destValue = dest;
	
	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (destValue);
}
