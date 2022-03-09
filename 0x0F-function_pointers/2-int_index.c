/**
 * int_index - sarches for an integer
 *
 * @array: array to be scanned
 * @size: size of the array
 * @cmp: function to compare
 *
 * Return: index of matching element, -1 not found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}

	return (-1);
}
