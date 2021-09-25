/**
 * _memset - fills the memory with constant bytes
 * @s: A Pointer
 * @b: char b
 * @n: bytes
 *
 * Return: pointer Char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index; 
	
	for (index = 0; index < n; index++)
		s[index] = b;

	return (s);
}
