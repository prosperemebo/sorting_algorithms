#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order using Bubble sort.
 *
 * @array: Pointer to the array to be sorted.
 * @size: Size of the array.
 */
void bubble_sort(int *array, size_t size)
{
	int swapped;
	size_t i, j;

	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;

		for (j = 0; j < size - i - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				swapped += 1;
				print_array(array, size);
			}
		}

		if (swapped == 0)
		{
			break;
		}
		
	}
}

/**
 * swap - Swaps two integers.
 *
 * @xp: Pointer to the first integer.
 * @yp: Pointer to the second integer.
 */
void swap(int *xp, int *yp) {
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}
