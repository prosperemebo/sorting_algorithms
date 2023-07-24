#include "sort.h"

/**
 * selection_sort - Sorts an array using selection sort.
 * @array: the array to be sorted
 * @size: the size of the array
*/
void selection_sort(int *array, size_t size)
{
	int temp;
	size_t i, j, index = 0;

	for (i = 0; i < size - 1; i++)
	{
		index = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[index])
				index = j;
		}
		if (index != i)
		{
			temp = array[i];
			array[i] = array[index];
			array[index] = temp;
			print_array(array, size);
		}
	}
}
