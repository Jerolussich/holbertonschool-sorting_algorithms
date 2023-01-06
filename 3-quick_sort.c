#include "sort.h"

/**
 * quick_sort - sorts an array of integers in ascending order
 * @array: array to be sorted
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	int temp, pivot = array[size - 1], i = 0;
	unsigned int j;

	if (size < 2 || array == NULL)
	{
		return;
	}
	for (j = 0; j < size - 1; j++)
	{
		if (array[j] < pivot)
		{
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			i++;
		}
	}

	temp = array[i];
	array[i] = pivot;
	array[size - 1] = temp;
	print_array(array, size);
	quick_sort(array, i);
	quick_sort(array + i + 1, size - i - 1);
}
