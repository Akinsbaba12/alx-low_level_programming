#include "lists.h"

/**
 * get_nodeint_at_index - Node of a listint_t linked list
 * @head: pointer that points to the head of the listint_t list
 * @index: index of the node
 *
 * return: if node does not exit return - NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	unsigned int node;
	for (node = 0; node < index; node++)
	{
	
		if (head == NULL)
			return (NULL);

		head = head->next;
	}
	return (head);
}
