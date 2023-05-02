#include "sort.h"

/**
 * selection_sort -This sorts an array of integers in ascending order
 * using the Selection sort algorithm
 * @array: the array to be sorted
 * @size: number of elements in @array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, index, min_index;
	int tmp, swapped = 0;

	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;
		min_index = i;
		for (index = i + 1; index < size; index++)
		{
			if (array[index] < array[min_index])
			{
				min_index = index;
				swapped = 1;
			}
		}
		if (swapped)
		{
			tmp = array[i];
			array[i] = array[min_index];
			array[min_index] = tmp;
			print_array(array, size);
		}
	}
}
