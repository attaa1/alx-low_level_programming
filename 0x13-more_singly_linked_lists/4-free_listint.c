#include "lists.h"

/**
 * free_listint - helps to free a linked list
 * @head: listint_t list we want to free
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
