#include <stdio.h>
#include "lists.h"

/**
 * listint_len - return the number of element in a linked list.
 * @h: pointer to the head of thr listint_t lists.
 *
 * return: Number of elements in the list.
 */

size_t listint_len(const listint_t *h)
{

	size_t count = 0;
	while (h != NULL)
	{
	
		count++;
		h = h->next;
	}


	return (count);
}
