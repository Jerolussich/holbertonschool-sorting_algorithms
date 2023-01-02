#include "sort.h"

/**
 * bubble_sort - sort using bubble algorithm
 * @array: Array given
 * @size: Size given
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i = 0, temp = 0, cycle = 0, change = 0;

	if (size == 1)
		return;
	while (cycle != 1)
	{
		change = 0;
		for (i = 0; i < size; i++)
		{
			if (array[i] > array[i + 1])
			{
				if ((i + 1) < size)
				{
					temp = array[i + 1];
					array[i + 1] = array[i];
					array[i] = temp;
					change += 1;
					print_array(array, size);
				}
			}
		}
		if (change == 0)
			cycle = 1;
	}
}
