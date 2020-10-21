#include "sort.h"

/**
 * bubble_sort - Sort integers algorithm
 * @array: The array
 * @size: The number
 */

void bubble_sort(int *array, size_t size)
{
	size_t i;
	int j, t;

	if (!array || !size)
		return;

	do 
	{
		j = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				t = array[i + 1];
				array[i + 1] = array[i];
				array[i] = t;
				j = 1;
				print_array(array, size);
			}
		}
	} 
	while (j);
}
