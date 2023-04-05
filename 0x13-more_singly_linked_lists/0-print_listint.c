#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Print all element of a listint_t list.
 * @h: This function takes a pointer to the listint_t list.
 *
 * Return: variable which conatins the number of nodes in the list_t list.
 */
size_t print_listint(const listint_t *h)
{
size_t count = 0;
while (h != NULL)
{
printf("%d\n", h->n);
count++;
h = h->next;
}
return (count);
}
