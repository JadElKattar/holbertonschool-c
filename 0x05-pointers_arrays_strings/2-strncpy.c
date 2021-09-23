/**
 * _strncpy - copy certain
 * @dest: destination
 * @src: source
 * @n: nb of copies
 *
 * Return: Pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *start = dest;
	int count = 0;

	while (count < n && *src != '\0')
	{
		*dest++ = *src++;
		count++;
	}
	while (count < n)
	{
		*dest++ = '\0';
		count++;
	}
	return (start);
}
