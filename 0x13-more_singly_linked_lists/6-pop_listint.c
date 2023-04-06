#include "lists.h"

/**
 * pop_listint - delete head of nodes of a listint_t list
 * @head: listint_t list is pointing to thr address of the head
 *
 * return: return the head of node’s data (n).
 *         if the linked list is empty return - 0.
 */
int pop_listint(listint_t **head)
{

	listint_t *tmp;
	int ret;

	if (*head == NULL)
		return (0);

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (ret);
}
