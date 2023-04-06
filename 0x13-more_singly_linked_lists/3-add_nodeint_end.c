#include "lists.h"

/**
 * add_nodeint_end - new node at the end of a listint_t list
 * @head: pointer to the address of the head of listint_t list
 * @n: integer for the new node to conatin
 *
 * @return: in case of function fails - NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new ->next = NULL;
	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
