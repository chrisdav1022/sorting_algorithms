#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list according to insertion sort
 * @list: doubly linked list.
 * Return: None.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *c, *next_node;

	if (!list || !*list || !(*list)->next)
		return;

	c = next_node = (*list)->next;

	while (next_node)
	{
		next_node = next_node->next;

		while (c->prev && c->n < c->prev->n)
		{
			c->prev->next = c->next;

			if (c->next)
				c->next->prev = c->prev;

			c->next = c->prev;
			c->prev = c->next->prev;
			c->next->prev = c;

			if (c->prev)
				c->prev->next = c;
			else
				*list = c;

			print_list(*list);
		}
		c = next_node;
	}
}
