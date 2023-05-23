#include "sort.h"
/**
 * insertion_sort_list - sorts a linked list with insertion sort algorithm.
 * @list: double pointer to the header.
 * Return: void.
*/
void insertion_sort_list(listint_t **list)
{
listint_t *current, *prev, *temp;

	if (list == NULL)
		return;

current = (*list)->next;
	while (current)
	{
		prev = current->prev;
		temp = current;

		while (prev && temp->n < prev->n)
		{
			if (temp->next)
				temp->next->prev = prev;
			if (prev->prev)
				prev->prev->next = temp;
			else
				*list = temp;

			temp->prev = prev->prev;
			prev->next = temp->next;
			temp->next = prev;
			prev->prev = temp;

			print_list(*list);
			prev = temp->prev;
		}

	current = current->next;
	}
}
