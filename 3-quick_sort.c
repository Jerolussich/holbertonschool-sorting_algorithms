#include "sort.h"

/**
 * quick_sort - sorts an array of integers in ascending order
 * @array: array to be sorted
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	int pivot = array[size - 1];
	int i = -1, temp;
	unsigned int j;

	if (size < 2 || array == NULL)
	{
		return;
	}

	for (j = 0; j < size - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			print_array(array, size);
		}
	}

	temp = array[i + 1];
	array[i + 1] = pivot;
	array[size - 1] = temp;
	print_array(array, size);
	quick_sort(array, i + 1);
	quick_sort(array + i + 2, size - i - 2);
}
