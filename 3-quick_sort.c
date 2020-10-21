#include "sort.h"

/**
 * quick_sort - sorts an array of integers with the quick sort algorithm
 * @array: array to sort
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	int tmp;
	size_t i = -1, j;

	if (size < 2)
		return;

	for (j = 0; j < size - 1; j++)
	{
		if (array[j] <= array[size - 1])
		{
			i++;
			if (i != j)
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;

				print_array(array, size);
			}
		}
	}

	if (i + 1 != size - 1)
	{
		tmp = array[i + 1];
		array[i + 1] = array[size - 1];
		array[size - 1] = tmp;

		print_array(array, size);
	}


	quick_sort(array, i + 1);
	quick_sort(array + (i + 1), size - i - 1);
}
