#include "sort.h"
#include "print_array.c"

/**
 * bubble_sort - sort using bubble algorithm
 * @array: Array given
 * @size: Size given
 */
void bubble_sort(int *array, size_t size)
{
    int i = 0, temp = 0, cicle = 0, change = 0;

    while (cicle != 1)
    {
        change = 0;
        for (i = 0; i <= size; i++)
        {
            if (array[i] > array[i + 1] && i < size)
            {
                temp = array[i + 1];
                array[i + 1] = array[i];
                array[i] = temp;
                change += 1;
                print_array(array, size);
            }
        }
        if (change == 0)
            cicle = 1;
    }
}
