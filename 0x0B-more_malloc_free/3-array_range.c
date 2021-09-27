#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - initializes an array of integers
 * @min: min element
 * @max: max element
 *
 * Return: int
 */
int *array_range(int min, int max)
{
	int i, length = 0;
	int *arranged_array;

	if (min > max)
		return (NULL);

	length = (max - min) + 1;

	arranged_array = malloc(sizeof(int) * length);

	if (arranged_array == NULL)
		return (NULL);


	for (i = 0; i < length; i++)
		arranged_array[i] = min++;

	return (arranged_array);
}
