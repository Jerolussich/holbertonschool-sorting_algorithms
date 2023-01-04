#include "sort.h"

/**
 * selection_sort - sort an array using selectiopn sort
 * @array: array structure
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	int swap;
	long unsigned int i, j, position;

	for(i = 0; i < (size - 1); i++)
	{
		position= i;
		for(j = i + 1; j < size; j++)
		{
			if(array[position]>array[j])
		position=j;
		}		
		if(position != i)
	{
	swap=array[i];
	array[i]=array[position];
	array[position]=swap;
	print_array(array, size);
	}
	}
}
