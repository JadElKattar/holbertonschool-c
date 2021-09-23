/**
 * reverse_array - reverses any array
 * @a: array
 * @n: size of the array to reverse
 *
 * Return: VOID
 */
void reverse_array(int *a, int n)
{
	int temp, i;
	int size = n - 1;

	for (i = 0; i < n; i++)
	{
		if (i > size)
			break;
		temp = a[i];
		a[i] = a[size];
		a[size] = temp;
		size--;
	}
}
