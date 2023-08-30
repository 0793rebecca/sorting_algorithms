#include "sort.h"

/**
  * bubble_sort - sorts integers in array from the smallest
  * to the biggest by the use of bubble sort algo
  * @array: pointer to element one of the array
  * @size: array's size
  */

void bubble_sort(int *array, size_t size)
{
	int swp;
	size_t k, l;
	int temp;

	if (!array || size <= 1)
		return;

	for (k = 0; k < size - 1; k++)
	{
		swp = 0;

		for (l = 0; l < size - 1; l++)
		{
			if (array[l] > array[l + 1])
			{
				temp = array[l];
				array[l] = array[l + 1];
				array[l + 1] = temp;
			swp = 1;

			print_array(array, size);
		}
	}

	if (!swp)
		break;
	}
}
