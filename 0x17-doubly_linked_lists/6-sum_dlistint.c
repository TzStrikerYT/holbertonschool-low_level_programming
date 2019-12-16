#include "lists.h"

/**
 * sum_dlistint - Add all values stored in the list
 * @head: Pointer to the head of the list
 * Return: Result of the sum of values, 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int add = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			add += head->n;
			head = head->next;
		}
	}
	return (add);
}
