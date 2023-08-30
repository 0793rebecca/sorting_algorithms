#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insertion_sort_list - a functon of a sort list
 * @list: pointer to the first element of the list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *k, *l;
	int temp;

	if (!list || !(*list) || !(*list)->next)
		return;

	for (k = (*list)->next; k != NULL; k = k->next)
	{
		temp = k->n;
		l = k->prev;

		while (l != NULL && l->n > temp)
		{
			l->next->n = l->n;
			l = l->prev;
		}

		if (l == NULL)
		{
			(*list)->n = temp;
		}

		else
		{
			l->next->n = temp;
		}

		print_list(*list);
	}
}
