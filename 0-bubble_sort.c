#include "sort.h"

/**
 * bubble_sort - sorts an array of integers using the Bubble sort algorithm
 * @array: array of integers
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
        unsigned int i, j, swap;

        if (!array || size < 2)
                return;

        for (i = 0; i < size - 1; i++)
        {
                for (j = 0; j < size - i - 1; j++)
                {
                        if (array[j] > array[j + 1])
                        {
                                swap = array[j];
                                array[j] = array[j + 1];
                                array[j + 1] = swap;
                                print_array(array, size);
                        }
                }
        }
}