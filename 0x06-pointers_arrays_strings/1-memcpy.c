/**
 * _memcpy - copy the memory
 * @dest: destination
 * @src: source
 * @n: byte to copy from source
 *
 * Return: char pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;
	
	for (index = 0; index < n; index++)
		dest[index] = src[index];
		
	return (dest);
}
