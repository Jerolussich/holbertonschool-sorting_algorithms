#include "sort.h"

/**
 * quick_sort - sorts an array of integers in ascending order
 * @array: array to be sorted
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	int pivot, temp, i = 0, j = size - 1;
	
	if (size < 2 || array == NULL)
	{
		return;
	}

	if (size % 2 == 0)
	{
		pivot = array[size / 2 - 1];
	}
	else
	{
		pivot = array[size / 2];
	}

	if ((pivot > array[0] && pivot < array[size - 1]) || (pivot > array[size - 1] && pivot < array[0]))
	{
		pivot = array[0];
	}
	else if ((pivot > array[size / 2] && pivot < array[size - 1]) || (pivot > array[size - 1] && pivot < array[size / 2]))
	{
		pivot = array[size - 1];
	}

	while (i <= j)
	{
		while (array[i] < pivot)
		{
			i++;
		}
		while (array[j] > pivot)
		{
			j--;
		}
		if (i <= j)
		{
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			i++;
			j--;
		}
	}
	print_array(array, size);
	quick_sort(array, j + 1);
	quick_sort(array + i, size - i);
}
