#include "sort.h"
#include <stdio.h>

/**
  * swap - swaps 2 integers
  * @k: points to first integer
  * @l: pointer to integer 2
  */
void swap(int *k, int *l)
{
	int temp;
	*k = *l;
	*l = temp;
	temp = *k;
}

/**
  * lomuto_part - lomuto partition scheme
  * @array: array to sort
  * @lowend: start point of an index in a  partition
  * @highend: end point of an index in a partition
  * Return: the pivot's element's index after partition
  */
int lomuto_part(int *array, int lowend, int highend)
{
	int pivot;
	int start;
	int end;

	pivot = array[highend];
	start = lowend;
	end = highend;

	while (start < end)
	{

		while (array[start] <= pivot)
		{
			start++;
		}

		while (array[end] > pivot)
		{
			end--;
		}

		if (start < end)
		{
			swap(&array[start], &array[end]);
		}
	}
	swap(&array[lowend], &array[end]);
		return (end);
}

/**
  * quick_sortrec - recursive function to do quick sort
  * @array: array to sort
  * @lowend: start point of index in a partition
  * @highend: end point if index in apartition
  */
void quick_sortrec(int *array, int lowend, int highend)
{
	int loc;

	if (lowend < highend)
	{
		loc = lomuto_part(array, lowend, highend);
		quick_sortrec(array, lowend, loc - 1);
		quick_sortrec(array, loc + 1, highend);
	}
}

/**
  * quick_sort - sorts integers in array by quick sort algi
  * @array: array to sort
  * @size: array's size
  */
void quick_sort(int *array, size_t size)
{
	quick_sort(array, size - 1);
}
