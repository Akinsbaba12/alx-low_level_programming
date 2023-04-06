#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - A function that frees listint_t list
 * @head: pointer addressing head of the listint_t list
 *
 * description: Head set to NULL
 */
void free_listint2(listint_t **head)
{

	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
	
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	head = NULL;
}
