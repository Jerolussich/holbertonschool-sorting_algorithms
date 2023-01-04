#include "sort.h"

/**
 * selection_sort - sort an array using selectiopn sort
 * @array: array structure
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i, position, temp, j = 0, stat = 0;
	int smallest_number_found, count = 0, action = 0;

	if (!array)
		return;
	for (i = 0; i < size - 1; i++)
	{
		printf("%d\n", array[i]);
		temp = array[i];
		smallest_number_found = array[i];
		action = 0;
		for (j = 0 + count; j < size; j++)
		{
			if (array[i] > array[j] && stat == 0)
			{
				smallest_number_found = array[j];
				position = j;
				stat = 1;
				action = 1;
			}
			if (smallest_number_found > array[j])
			{
				smallest_number_found = array[j];
				position = j;
				action = 1;
			}
		}
			if (action == 1)
			{
				array[i] = smallest_number_found;
				array[position] = temp;
				count += 1;
				stat = 0;
				print_array(array, size);
			}
			else
				break;

	}
}
