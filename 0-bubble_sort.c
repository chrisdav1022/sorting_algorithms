#include "sort.h"

/**
 * bubble_sort - Sort integers algorithm
 * @array: The array
 * @size: The number
 */

void bubble_sort(int *array, size_t size)
{
	size_t i;
	unsigned int j = 0;
	int t;

	if (!array || !size)
		return;

	while (j < size)
	{
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				t = array[i];
				array[i] = array[i + 1];
				array[i + 1] = t;
				print_array(array, size);
			}
		}
		j++;
	}
}
