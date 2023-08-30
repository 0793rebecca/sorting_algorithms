#include "sort.h"

/**
  * selection_sort - sorts array of integers from the biggest to smallest
  * by the use of selection sorting algorithm
  * @array: array that has to be sorted
  * @size: array's size
  **/

void selection_sort(int *array, size_t size)
{
	size_t k, l, min;
	int temp;

	for (k = 0; k < size - 1; k++)
	{
		min = k;

		for (l = k + 1; l < size; l++)
		{
			if (array[l] < array[min])
			{
				min = l;
			}
			if (min != k)
			{
				temp = array[k];
				array[k] = array[min];
				array[min] = temp;

				print_array(array, size);
			}
		}
	}
}
