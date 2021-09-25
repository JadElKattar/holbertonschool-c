/**
 * _strchr - returns a pointer to the first occurence of char c
 * @s: char returned to
 * @c: first occurence
 *
 * Return: char pointer
 */
char *_strchr(char *s, char c);
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return ('\0');
}
