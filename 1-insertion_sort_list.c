#include <stdio.h>
#include <stdlib.h>

/**
 * insertion_sort_list - a functon of a sort list
 * @list - sorted list
 */
void insertion_sort_list(listint_t **list);
{
	listint_t *node;

	if (list == NULL || (*list)->next == NULL)
		return;
	node = (*list)->next;
	while(node)
	{
		while ((node->prev) && (node->prev->n > node->n))
		{
			node = swap_node(node, list);
			print_list(*list)
		}
		node = node->next;
	}
}
