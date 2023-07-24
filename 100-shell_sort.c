#include "sort.h"

/**
 * shell_sort - Sort an array using shell sort algorithm
 * @array: Input Array
 * @size: Size of input Array
*/
void shell_sort(int *array, size_t size)
{
	size_t skip = 1, i, j;
	int temp;

	if (size <= 1)
		return;
	while (skip < size / 3)
	{
		skip = skip * 3 + 1;
	}

	for (; skip > 0; skip = (skip - 1) / 3)
	{
		for (i = skip; i < size; i++)
		{
			temp = array[i];
			for (j = i; (j >= skip && array[j - skip] > temp); j -= skip)
			{
				array[j] = array[j - skip];
			}
			array[j] = temp;
		}
		print_array(array, size);
	}
}
