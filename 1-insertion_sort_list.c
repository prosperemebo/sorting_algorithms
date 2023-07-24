#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list
 * of integers in ascending order
 * using the Insertion sort algorithm.
 *
 * @list: Double pointer to the head of the linked list.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp, *current;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = *list;
	while (current != NULL)
	{
		while (current->next && (current->n > current->next->n))
		{
			temp = current->next;
			current->next = temp->next;
			temp->prev = current->prev;
			if (current->prev != NULL)
				current->prev->next = temp;
			if (temp->next != NULL)
				temp->next->prev = current;
			current->prev = temp;
			temp->next = current;
			if (temp->prev)
				current = temp->prev;
			else
				*list = temp;
			print_list(*list);
		}

		current = current->next;
	}
}
