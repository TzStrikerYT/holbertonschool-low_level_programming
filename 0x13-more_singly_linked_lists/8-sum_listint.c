#include "lists.h"

/**
 * sum_listint - sum elements of the list and return this value
 * @head: head pointer of the single list
 * Return: sum of the data(n).
 */

int sum_listint(listint_t *head)
{
	int sum;

	if (head == 0)
		return (0);

	sum = 0;
	while (head != 0)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
