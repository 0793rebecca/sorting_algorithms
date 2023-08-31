#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size);


/**
  * struct listint_s - node of double linked list
  * @prev: pointer to the previous element in the list
  * @n: integer
  * @next: pointer to the next element in the list
  */
typedef struct listint_s
{
	int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list);

void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void swap(int *k, int *l);
int lomuto_part(int *array, int lowend, int highend);
void quick_sortrec(int *array, int lowend, int highend);
void quick_sort(int *array, size_t size);

#endif
