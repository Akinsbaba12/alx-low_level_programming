#include "lists.h"

/**
 * delete_nodeint_at_index - Delete node of a given index of listint_t list.
 * @head: pointer to the address of the headof listint_t list.
 * @index: index of node to be deleted  - indices begin at 0.
 *
 * Return: success - 1
 *         failure - -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *copy = *head;
	unsigned int node;

	if (copy == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (copy->next == NULL)
			return (-1);

		copy = copy->next;
	}

	tmp = copy->next;
	copy->next = tmp->next;
	free(tmp);
	return (1);
}
