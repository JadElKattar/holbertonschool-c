/**
 *int_index - searches for an integer
 *@array: za array
 *@size: size of za array
 *@cmp: compare function
 *
 *Description: Return the index of the first element
 *Return: index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (size <= 0)
		return (-1);

	if (cmp && array)
	{
		for (x = 0; x < size; x++)
		{
			if ((*cmp)(array[x]) == 1)
			{
				return (x);
			}
		}
	}
	return (-1);
}
