#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - function with two arguments
 * @array: za array
 * @size: size of aray
 * @action: pointer to the function
 *
 * Description: iterates through the array
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (action && array)
	{
		for (x = 0; x < size; x++)
		{
			action(array[x]);
		}
	}
}
