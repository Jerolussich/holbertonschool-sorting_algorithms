#include "sort.h"

void selection_sort(int *array, size_t size)
{
	long unsigned int i, position, temp, j = 0, stat = 0;
	int smallest_number_found, count = 0, action = 0;

    for (i = 0; i < size - 1; i++)
    {
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
				array[i] = smallest_number_found;
				array[position] = temp;
				count += 1;
				stat = 0;
				if (action == 1)
					print_array(array, size);

	}
}
