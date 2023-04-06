#include "lists.h"

/**
 * sum_listint - sum of all data (n) in a listint_t list
 * @head: pointer pointing to the head of listint_t
 *
 * return: when it is empty - 0
 *         if not sum of all data
 */
int sum_listint(listint_t *head)
{

	int sum = 0;

	while (head)
	{
	
		sum =+ head->n;
		head = head->next;
	}
	return (sum);
}
