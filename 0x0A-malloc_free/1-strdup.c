#include "holberton.h"
#include <stdlib.h>
/**
 *_strdup - copy of the string
 *@str: the string
 *
 *
 *Return: char
 */
char *_strdup(char *str)
{
	char *duplicate_str;
	unsigned int i, len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	duplicate_str = malloc(sizeof(char) * (len + 1));

	if (duplicate_str == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		duplicate_str[i] = str[i];

	duplicate_str[len] = '\0';

	return (duplicate_str);
}
