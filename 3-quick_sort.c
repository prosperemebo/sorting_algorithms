#include "sort.h"

/**
 * split - Split the array into 2 portions
 *
 * @array: Input array
 * @low: Lowest index
 * @high: Highest index
 * @size: Array size
 *
 * Return: the index of the pivot
 */
int split(int *array, int low, int high, size_t size)
{
	int index = array[high], i = low - 1, j;

	for (j = low; j < high; j++)
	{
		if (array[j] < index && array[++i] != array[j])
		{
			swap(&array[i], &array[j]);
			print_array(array, size);
		}
	}
	if (array[++i] != array[high])
	{
		swap(&array[i], &array[high]);
		print_array(array, size);
	}
	return (i);
}

/**
 * recursion - sort the array using recursion
 *
 * @array: the array to be sorted
 * @low: the lowest index
 * @high: the highest index
 * @size: size of the array
 */
void recursion(int *array, int low, int high, size_t size)
{
	if (low < high)
	{
		int index = split(array, low, high, size);

		recursion(array, low, index - 1, size);
		recursion(array, index + 1, high, size);
	}
}

/**
 * quick_sort - Sort an array using the quick sort algorithm
 *
 * @array: Input Array
 * @size: Array Size
 */
void quick_sort(int *array, size_t size)
{
	recursion(array, 0, (int)size - 1, size);
}

/**
 * swap - Swap the value inside x with value inside y
 * @x: the value to be swapped
 * @y: the other value to be swapped
 */
void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
