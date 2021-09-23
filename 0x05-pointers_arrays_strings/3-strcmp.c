/**
 * _strcmp - compares two strings
 * @s1: pointer first string
 * @s2: pointer second string
 *
 * Return: Integer - Difference in Bytes (ASCII)
 */
int _strcmp(char *s1, char *s2)
{
	int diff = 0;
	while (*s1)
	{
		if (*s1 != *s2)
		{
			diff = *(unsigned char *)s1 - *(unsigned char *)s2;
			break;
		}
		s1++;
		s2++;
	}
	return (diff);
}
