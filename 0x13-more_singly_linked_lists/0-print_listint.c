#include "lists.h"

/**
 * print_listint - this prints all elements of the linked list
 * @h: the linked list of type listint_t we want to print
 *
 * Return: the nb of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
