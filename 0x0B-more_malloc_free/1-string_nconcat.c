#include "holberton.h"
#include <stdlib.h>
/**
 *string_nconcat - concatenate two strings
 *@s1:first string
 *@s2:second string
 *@n: number of bytes of the s2
 *
 *Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *jointstr;
	unsigned int i, j;
	unsigned int length1 = 0;
	unsigned int length2 = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		length1++;
	jointstr = malloc(sizeof(char) * (length1 + length2 + 1));
	if (jointstr == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		jointstr[i] = s1[i];
	for (j = 0; s2[j] != '\0' && j < length2; j++)
		jointstr[i + j] = s2[j];
	jointstr[i + j] = '\0';
	return (jointstr);
}
