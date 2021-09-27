#include "holberton.h"
#include <stdlib.h>


/**
 * malloc_checked - memory allocator
 * @b: Size Of Memory
 *
 * Return: Void
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
		return (NULL);
	}
	return (ptr);
}
