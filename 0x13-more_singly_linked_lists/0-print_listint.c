#include "lists.h"

/**
 * print_listint – this prints elements of the linked list
 * @h: the linked list of type listint_t to print
 *
 * Return: nodes’ number
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
