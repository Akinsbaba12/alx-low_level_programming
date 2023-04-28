#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t list.
 * @head: A pointer to the address of
 *        Head of the list_t list.
 *
 * Return: Pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *above, *beyond;

	if (head == NULL || *head == NULL)
		return (NULL);

	beyond = NULL;

	while ((*head)->next != NULL)
	{
		above = (*head)->next;
		(*head)->next = beyond;
		beyond = *head;
		*head = above;
	}

	(*head)->next = beyond;

	return (*head);
}
